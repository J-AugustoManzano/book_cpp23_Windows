// C04EX02.CPP

#include <iostream>
#include <cctype> // for use: toupper()

using namespace std;

int main(void)
{
  uint16_t n, i = 1;
  uint16_t fact {1};
  char resp {'Y'};

  while (toupper(resp) == 'Y')
    {
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

      cout << "Do you want to continue?" << endl;
      cout << "Press [Y] for YES, other letter for NO: ";
      cin.get(resp);
      cin.ignore();
      cout << endl;
    }

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
