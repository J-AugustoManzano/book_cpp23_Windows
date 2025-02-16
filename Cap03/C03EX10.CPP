// C03EX10.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float a, b, r;
  int32_t option;

  cout << setprecision(2) << fixed << right;

  cout << "Enter the value <A>: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the value <B>: ";
  cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  cout << "[1] - Addition" << endl;
  cout << "[2] - Subtraction" << endl;
  cout << "[3] - Multiplication" << endl;
  cout << "[4] - Division" << endl;
  cout << "\n";

  cout << "Choose an option: ";
  cin >> option;
  cin.ignore(80, '\n');

  if (option == 1)
    r = a + b;
  if (option == 2)
    r = a - b;
  if (option == 3)
    r = a * b;
  if (option == 4)
    if (b == 0)
      r = 0;
    else
      r = a / b;

  cout << "\nResult is equal to: " << setw(5);
  cout << r << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
