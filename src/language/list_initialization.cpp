
#include <iostream>

struct A {
  int v1;
  int v2;

  A() = default;
  void print() { std::cout << "v1: " << v1 << ", v2: " << v2 << std::endl; }
};

int main() {
  // Initializer Lists
  {
    // are the placeholder values set to good defaults?
    A a3{};      // no args       // Requires 0 arg ctor or default ctor
    A a2{1};     // first arg     // Requires 1 arg ctor
    A a1{1, 2};  // all args      // Requires 2 arg ctor
    a1.print();  // v1: 1, v2: 2
    a2.print();  // v1: 1, v2: 0  // v2==0, is it good luck?
    a3.print();  // v1: 0, v2: 0  // v1,v2==0, is it good luck?
  }
}
