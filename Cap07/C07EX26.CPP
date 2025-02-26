// C07EX26.CPP

#include <iostream>

using namespace std;

#define product(x, y) ((x) * (y))

#define swap(a, b) \
{                  \
  int32_t x = (a); \
  (a) = (b);       \
  (b) = x;         \
}

int main(void)
{
  int32_t a, b;

  cout << "Enter value A: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter value B: ";
  cin >> b;
  cin.ignore(80, '\n');

  swap(a, b);

  cout << "Value A: " << a << endl;
  cout << "Value B: " << b << endl;

  cout << "A x B = " << product(a, b) << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
