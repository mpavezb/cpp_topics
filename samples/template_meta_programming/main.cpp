#include <iostream>
#include <string>

#include "factorial.h"
#include "loop.h"
#include "if_else.h"
#include "switch.h"
#include "language.h"

using namespace std;

struct THEN
{
  static int func() 
  {
    cout << "Inside THEN";
    return 42;
  }
};

struct ELSE
{
  static int func() 
  {
    cout << "Inside ELSE";
    return 0;
  }
};

int main()
{

  int f5 = FACTOR< 5 >::RESULT;
  cout << "Factorial of 5 is: " << f5 << "." << endl << endl;

  
  cout << "Loop example:" << endl;
  LOOP<8>::EXEC();
  cout << endl << endl;

  cout << "If Else example" << endl;
  IF<false>::EXEC();
  IF<true>::EXEC();

  cout << "Switch case example" << endl;
  SWITCH<1>::EXEC();
  SWITCH<2>::EXEC();
  SWITCH<0>::EXEC();
  SWITCH<10>::EXEC();


  int result = IF_ELSE< 4 == sizeof(int), THEN, ELSE >::RESULT::func();
  cout << " - returning: " << result;
  
  return 0;
}
