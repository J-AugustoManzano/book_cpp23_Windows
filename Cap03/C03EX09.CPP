// C03EX09.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int main(void)
{
  float a, b, c;

  cout << "Enter the side <A>: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the side <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "Enter the side <C>: "; cin >> c;
  cin.ignore(80, '\n');

  if (a < b + c and b < a + c and c < a + b)
    if (a == b and b == c)
      cout << "Equilateral Triangle.";
    else
      if (a == b or a == c or c == b)
        cout << "Isosceles Triangle.";
      else
        cout << "Scalene Triangle.";
  else
    cout << "Values do not form a triangle.";

  cout << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
