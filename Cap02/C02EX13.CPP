// C02EX13.CPP

#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
  auto number = 42;
  auto pi     =  3.1416;

  cout << "Number: " << number;
  cout << " - Type: " << typeid(number).name() << endl;

  cout << "Pi: " << pi;
  cout << " - Type: " << typeid(pi).name() << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
