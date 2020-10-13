#include <functional>  // std::bind
#include <iostream>
#include <string>

using namespace std;

struct MyClass {
  void func(std::string s) { cout << "Calling A::func() // " << s << endl; }
};

void func(MyClass& this_, std::string s) {
  cout << "Calling func()    // " << s << endl;
}

int main() {
  MyClass an_object;
  func(an_object, "free function");
  an_object.func("member function");

  using namespace std::placeholders;
  auto b1 = std::bind(&MyClass::func, &an_object, _1);
  auto b2 = std::bind(&MyClass::func, _1, _2);

  b1("bind to 'a'");
  b2(an_object, "bind using 'a' as argument");  // bind allows using A::func as
                                                // if it were a free function!.

  return 0;
}
