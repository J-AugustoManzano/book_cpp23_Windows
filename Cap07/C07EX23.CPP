// C07EX23.CPP

#include <iostream>

using namespace std;

using integerValue = int32_t;
using real = float;
using integer = integerValue;

int main(void)
{
	
  integer a;
  real b;

  cout << "Enter an integer value: ";
  cin >> a;
  cin.ignore(80, '\n');
  cout << "The entered value is: " << a << endl;

  cout << endl;
  cout << "Enter a real value: ";
  cin >> b;
  cin.ignore(80, '\n');
  cout << "The entered value is: " << b << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
