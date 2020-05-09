#include <iostream>

template<bool Condition>
class IF
{
 public:
  static inline void EXEC()
  {
    std::cout << "Statement is true" << std::endl;
  }
};


template<>
class IF<false>
{
public:
  static inline void EXEC()
  {
    std::cout << "Statement is false" << std::endl;
  }
};
