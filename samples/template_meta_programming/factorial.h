
template<int I>
class FACTOR
{
  public:
      enum {RESULT = I * FACTOR<I-1>::RESULT};
};


template<>
class FACTOR< 1 >
{
  public:
      enum {RESULT = 1};
};
