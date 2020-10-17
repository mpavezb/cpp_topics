#include <cstdlib>

struct Suicide {
  void commit() { delete this; }
};

void suicideInStack() {
  // free(): invalid pointer
  // Aborted (core dumped)
  Suicide s;
  s.commit();
}

void suicideInHeap() {
  Suicide *s = new Suicide;
  s->commit();
}

void suicideWithPlacementNewInChar() {
  char place[sizeof(Suicide)];
  // Suicide *s = new (place) Suicide;
  // s->commit();
}

void suicideWithPlacementNewMalloc() {
  // requires definition of operator new
  void *place = std::malloc(sizeof(Suicide));
  Suicide *s = new (place) Suicide;
  // s->commit();
}

int main() {
  // https://isocpp.org/wiki/faq/freestore-mgmt#delete-this
  // deleting this is ok, we need to be 100% sure that:
  // - object was allocated via `new`.
  // - object not allocated via `new[]`, `new(place)`.
  // - object not in stack, not a global, not a member of another object.
  // - that function will be the last one invoked on `this`.
  // - `this` members wont be used (including code in destructor).
  // - the `this` pointer is not used at all afterwards.

  // Placement New:
  // `new (place)` is the placement new operator. It allows to construct an
  // object in memory that is already allocated.

  // suicideInStack(); // Runtime error
  suicideInHeap();  // Maybe OK

  suicideWithPlacementNewInChar();
  suicideWithPlacementNewMalloc();
  return 0;
}
