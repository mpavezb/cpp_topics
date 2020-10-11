#include <string>

class Person {
public:
  std::string name;

  // impl class hides the real implementation
  class PersonImpl;
  PersonImpl *impl;

  Person();
  ~Person();

  void greet();

  // The consumer still has access to private
  // declarations we would not like to expose.
private:
  void not_so_secret_internal_method();
  std::string not_so_secret_name;
};
