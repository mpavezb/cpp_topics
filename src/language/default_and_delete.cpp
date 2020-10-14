
#include <iostream>

struct A {
  int v1;
  int v2;

  A() = default;
  // A() { print(); }

  void print() { std::cout << "v1: " << v1 << ", v2: " << v2 << std::endl; }
};

int main() {
  // Default ctor
  {
    A a1;        // default ctor
    a1.print();  // v1: 5486450, v2: 99874

    A().print();  // default ctor
                  // v1: -95416, v2: 84984

    // A a5(1, 2);  // ERROR
  }
}
