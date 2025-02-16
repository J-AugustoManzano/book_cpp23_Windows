// C03EX04.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b, r;

  cout << "Enter the value <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the value <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";

  if (r = a + b; r >= 10)
    cout << "Result = " << r + 5 << endl << endl;
  else
    cout << "Result = " << r - 7 << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
