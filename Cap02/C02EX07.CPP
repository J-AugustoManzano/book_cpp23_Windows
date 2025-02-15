// C02EX07.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b, r;

  cout << "Enter a value for the variable <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter a value for the variable <B>: "; cin >> b;
  cin.ignore(80, '\n');

  r = a + b;

  cout << "Result = " << r << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
