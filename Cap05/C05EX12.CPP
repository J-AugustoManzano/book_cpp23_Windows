// C05EX12.CPP

#include <iostream>

using namespace std;

float a, b;

void sum(void)
{

  float r;

  cout << "Enter the first number ..: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the second number .: ";
  cin >> b;
  cin.ignore(80, '\n');

  r = a + b;

  cout << "The result of the sum is: " << r << endl;
}

int main(void)
{
  cout << "Sum Calculator" << endl;
  sum();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
