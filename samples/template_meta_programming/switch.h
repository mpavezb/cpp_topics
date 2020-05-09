#include <iostream>

template< int _case >
class SWITCH {
public:
    static inline void EXEC(){
      std::cout << " SWITCH - default " << std::endl;
    }
};

template<>
class SWITCH< 1 > {
    public:
    static inline void EXEC(){
      std::cout << " SWITCH - 1 " << std::endl;
    }
};

template<>
class SWITCH< 2 > {
    public:
    static inline void EXEC(){
      std::cout << " SWITCH - 2 " << std::endl;
    }
};
