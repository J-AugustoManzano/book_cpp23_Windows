// C02EX12.CPP

#include <iostream>
using namespace std;

int main(void)
{
  bool x = true;

  cout << boolalpha; 

  cout << "Value of X as true ...: " << x << endl;

  x = false;
  cout << "Value of X as false ..: " << x << endl;

  cout << noboolalpha; 

  x = true;
  cout << "Value of X as true ...: " << x << endl;

  x = false;
  cout << "Value of X as false ..: " << x << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
