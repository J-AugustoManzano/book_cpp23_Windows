// C05EX11.CPP

#include <iostream>

using namespace std;

float a, b, r;

void sum(void)
{
  cout << "Enter the first number ..: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the second number .: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;
}

int main(void)
{
  cout << "Sum Calculator" << endl;
  sum();

  cout << "The result of the sum is: " << r << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
