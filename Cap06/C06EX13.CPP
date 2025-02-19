// C06EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  const int32_t x = 10;

  const int32_t *px = &x;

  // Attempt to modify the value of the constant
  // results in a compilation error
  // *px = 20; // Error!

  cout << "Value of constant x .....: " << x << endl;
  cout << "Value pointed to by px ..: " << *px << endl;

  int32_t y = 5;

  int32_t *const py = &y;

  *py = 15;

  cout << "Value of variable y .....: " << y << endl;
  cout << "Value pointed to by py ..: " << *py << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
