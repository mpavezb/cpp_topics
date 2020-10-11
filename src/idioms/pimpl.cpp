#include "pimpl.h"

#include <iostream>
#include <string>

// implementation is hidden by writting it on the source file.
class Person::PersonImpl {
 public:
  void greet(Person *p);
};

void Person::PersonImpl::greet(Person *p) {
  std::cout << "Hello, my name is " << p->name << "." << std::endl;
}

Person::Person() : impl(new PersonImpl) {}

Person::~Person() { delete impl; }

void Person::greet() { impl->greet(this); }

int main() {
  Person p;
  p.name = "Peter";
  p.greet();
  return 0;
}
