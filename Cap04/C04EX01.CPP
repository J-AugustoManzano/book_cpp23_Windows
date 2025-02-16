// C04EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{
  uint16_t n, i = 1;
  uint64_t fact {1};

  cout << "Factorial Program" << endl << endl;
  cout << "Factorial of what value: "; cin >> n;
  cin.ignore(80, '\n');

  while (i <= n)
    {
       fact *= i;
       ++i;
    }

  cout << endl;
  cout << "Factorial of " << n << " = "<< fact << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
