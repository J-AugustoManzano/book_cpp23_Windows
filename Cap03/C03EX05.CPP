// C03EX05.CPP

#include <iostream>
#include <ciso646> // opcional no GCC

using namespace std;

int main(void)
{
  int32_t number;

  cout << "Enter a value: "; cin >> number;
  cin.ignore(80, '\n');
  cout << endl;

  if (number >= 20 and number <= 90)
    cout << "The value is between 20 and 90.";
  else
    cout << "The value is not between 20 and 90.";

  cout << "\n" << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
