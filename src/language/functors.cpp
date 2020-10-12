#include <functional>  // std::bind
#include <iostream>
#include <string>

using namespace std;

struct A {
  void func(std::string s) { cout << "Calling A::func() // " << s << endl; }
};

void func(A& this_, std::string s) {
  cout << "Calling func()    // " << s << endl;
}

int main() {
  A a;
  func(a, "free function");
  a.func("member function");

  using namespace std::placeholders;
  auto b1 = std::bind(&A::func, &a, _1);
  auto b2 = std::bind(&A::func, _1, _2);

  b1("bind to 'a'");
  b2(a, "bind using 'a' as argument");  // bind allows using A::func as if it
                                        // were a free function!.

  return 0;
}
