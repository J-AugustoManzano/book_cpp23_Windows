// C04EX04.CPP

#include <iostream>
#include <cctype>

using namespace std;

int main(void)
{
  uint16_t n, i;
  uint16_t fact;
  char resp {'Y'};

  do
    {
      cout << "Factorial Program" << endl << endl;
      cout << "Factorial of what value: "; cin >> n;
      cin.ignore(80, '\n');

      i = 1;
      fact = 1;
      do
        {
           fact *= i;
           ++i;
        }
      while (i <= n);

      cout << endl;
      cout << "Factorial of " << n << " = "<< fact << endl;
      cout << endl;

      cout << "Do you want to continue?" << endl;
      cout << "Press [Y] for YES, other letter for NO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }
  while (toupper(resp) == 'Y');

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
