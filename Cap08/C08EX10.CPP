// C08EX10.CPP

#include <iostream>
#include <cmath>

using namespace std;

class Area
{
  public:

    // Area: square
    long area(int x) {
      return pow(x, 2);
    }

    // Area: cylinder
    double area(float r, float h) {
      return r * r * 3.14159 * h;
    }

    // Area: cube
    long area(int x, int y, int z) {
      return x * y * z;
    }
};

int main(void)
{
  Area calc;

  cout << "Area: Square ..: " << calc.area(5) << endl;
  cout << "Area: Cube ....: " << calc.area(5, 6, 7) << endl;
  cout << "Area: Cylinder : " << calc.area(7, 3) << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
