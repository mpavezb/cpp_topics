#include <iostream>

using namespace std;

class Base {
 public:
  virtual void vFunc() { cout << "b.vFunc()" << endl; }
  void func() { cout << "b.func()" << endl; }
};

class Derived : public Base {
 public:
  void vFunc() override { cout << "d.vFunc()" << endl; }
  void func() { cout << "d.func()" << endl; }
};

int main() {
  /**
   * This example demonstrate how runtime dynamic dispatch works.
   * Important to know:
   * - downcast is forbidden: Derived d = Base();
   * - upcast is fine: Base b = Derived();
   * - pointers and references dehave the same!.
   * - dynamic dispatch requires:
   *   - pointer/ref to derived class.
   *   - virtual method in base class.
   */

  Base b;
  Derived d;
  b.func();   // b.func()
  b.vFunc();  // b.vFunc()
  d.func();   // d.func()
  d.vFunc();  // d.vFunc()

  Base *pBb = &b;
  Base &rBb = b;
  Base *pBd = &d;  // upcast is ok.
  Base &rBd = d;   // upcast is ok.

  // Derived *pDb = &b;  // downcast is NOK
  // Derived &rDb = b;   // downcast is NOK
  Derived *pDd = &d;
  Derived &rDd = d;

  // func on b
  pBb->func();  // b.func()
  rBb.func();   // b.func()
  pBd->func();  // b.func() // no dynamic dispatch (non-virtual)
  rBd.func();   // b.func() // no dynamic dispatch (non-virtual)

  // vfunc on b
  pBb->vFunc();  // b.vFunc()
  rBb.vFunc();   // b.vFunc()
  pBd->vFunc();  // d.vFunc() // runtime polymorphism (virtual)
  rBd.vFunc();   // d.vFunc() // runtime polymorphism (virtual)

  // func on d
  pDd->func();  // d.func()
  rDd.func();   // d.func()
  // pDb->func();
  // rDb.func();

  // vfunc on d
  pDd->vFunc();  // d.vFunc()
  rDd.vFunc();   // d.vFunc()
  // pDb->vFunc();
  // rDb.vFunc();

  return 0;
}
