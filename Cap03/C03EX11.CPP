// C03EX11.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b, r;

  cout << "Enter the value <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the value <B>: "; cin >> b;
  cin.ignore(80, '\n');

  r = (a > b) ? a : b;

  cout << "\nThe largest value entered is: " << r << ".\n";

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
