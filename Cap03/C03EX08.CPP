// C03EX08.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t number;

  cout << "Enter an integer: ";
  cin >> number;
  cin.ignore(80, '\n');

  if (not(number == 5))
      cout << "The number is not equal to 5." << endl;
  else
      cout << "The number is equal to 5." << endl;

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
