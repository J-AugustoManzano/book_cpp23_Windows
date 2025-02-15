// C02EX10.CPP

#include <iostream>
#include <cmath>

using namespace std;

const float PI = 3.141592; // or #define PI 3.141592

int main(void)
{
  float a, h, r;
  
  cout << "Enter the height ......: ";
  cin >> h;
  cin.ignore(80, '\n');

  cout << "Enter the radius ......: ";
  cin >> r;
  cin.ignore(80, '\n');

  a = h * PI * pow(r, 2);

  cout << "Area of the Cylinder ..: " << a << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
