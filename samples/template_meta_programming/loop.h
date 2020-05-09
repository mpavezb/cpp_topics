#include <iostream>

template<int i>
class LOOP
{
  public:
    static inline void EXEC()
    {
      std::cout << "A" << i << " ";
      LOOP< i-1 >::EXEC();
      std::cout << "B" << i << " ";
    }
};

template<>
class LOOP<0>{
  public:
    static inline void EXEC(){
      std::cout << "A" << 0 << " ";
      std::cout << "\n"; 
      std::cout << "B" << 0 << " ";
    }
};
