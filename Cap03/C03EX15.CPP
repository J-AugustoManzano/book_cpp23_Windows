// C03EX15.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  int32_t n, r4, r5;

  cout << "Enter a natural number: "; cin >> n;
  cin.ignore(80, '\n');
  cout << endl;

  r4 = n - 4 * (n / 4); 
  r5 = n - 5 * (n / 5);

  if (r4 == 0 and r5 == 0)
    cout << "Result = " << n << endl;
  else
    cout << "Value is not divisible by 4 and 5" << endl;

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
