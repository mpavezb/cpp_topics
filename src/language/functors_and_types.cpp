#include <functional>  // std::bind
#include <iostream>
#include <string>

using namespace std;

// functions have the same type
int foo(double x, long y) { return x + y; }
int bar(double a, long b) { return a + b; }

// These funtors have different types
struct A {
  int operator()(double x, long y) { return x + y; }
};
struct B {
  int operator()(double x, long y) { return x + y; }
};

void apply(int (*f)(double x, long y)) {
  cout << "apply(): " << f(1.0, 4) << endl;
}
void apply_to_A(A f) { cout << "apply_to_A(): " << f(1.0, 4) << endl; }

template <typename TFO>
void templated_apply(TFO f) {
  cout << "templated_apply(): " << f(1.0, 4) << endl;
}

int main() {
  A a;
  B b;

  apply(foo);  // ok
  apply(bar);  // ok
  // apply(a);  // error!

  apply_to_A(a);  // ok
  // applyA(b);  // error!

  // Function Templates allow
  templated_apply(foo);
  templated_apply(bar);
  templated_apply(a);
  templated_apply(b);

  return 0;
}
