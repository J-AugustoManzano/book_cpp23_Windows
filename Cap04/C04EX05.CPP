// C04EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{
  uint16_t n;
  uint16_t fact = 1;

  cout << "Factorial Program" << endl << endl;
  cout << "Factorial of what value: "; cin >> n;
  cin.ignore(80, '\n');

  for (uint16_t i = 1; i <= n; ++i)
    fact *= i;

  cout << endl;
  cout << "Factorial of " << n << " = "<< fact << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
