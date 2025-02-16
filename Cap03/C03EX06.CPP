// C03EX06.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t accessCode;

  cout << "Enter the access code: "; cin >> accessCode;
  cin.ignore(80, '\n');

  cout << endl;

  if (accessCode == 1 or accessCode == 2 or accessCode == 3)
    {
      if (accessCode == 1)
        cout << "The code has been activated: 1.\n";
      if (accessCode == 2)
        cout << "The code has been activated: 2.\n";
      if (accessCode == 3)
        cout << "The code has been activated: 3.\n";
    }
  else
    cout << "Invalid code.\n";

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
