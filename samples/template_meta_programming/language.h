
// if - else
template< bool Condition, class THEN, class ELSE >
struct IF_ELSE
{
  template< bool C >
  struct selector
  {
    typedef THEN SELECT_CLASS;
  };

  template <>
  struct selector< false >
  {
    typedef ELSE SELECT_CLASS;
  };
  
  typedef selector< Condition >::SELECT_CLASS RESULT;
};

