#include <functional>  // std::bind
#include <iostream>
#include <string>

using namespace std;

struct Foo {
  void sample(int n, float x) { cout << n << " - " << x << endl; }
  int data = 10;
};

int main() {
  using namespace std::placeholders;  // for _1, _2, _3...

  Foo foo;

  // bind to function
  auto bind_f1 = std::bind(&Foo::sample, &foo, 100, 5.0);
  auto bind_f2 = std::bind(&Foo::sample, &foo, _1, 5.0);
  auto bind_f3 = std::bind(&Foo::sample, &foo, 100, _1);
  auto bind_f4 = std::bind(&Foo::sample, &foo, _1, _2);

  bind_f1();
  bind_f2(100);
  bind_f3(5.0);
  bind_f4(100, 5.0);

  // bind to variable
  auto bind_v1 = std::bind(&Foo::data, &foo);
  auto bind_v2 = std::bind(&Foo::data, _1);

  Foo foo2;
  foo2.data = 5;
  cout << bind_v1() << endl;
  cout << bind_v2(foo2) << endl;

  return 0;
}
