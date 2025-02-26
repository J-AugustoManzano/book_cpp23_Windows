// C07EX27.CPP

#include <iostream>

using namespace std;

#define product1(x, y) ((x) * (y))
#define product2(x, y) (x * y)

int main(void)
{
  cout << "(2 + 3) x 4 = " << product1(2 + 3, 4) << endl;
  cout << "(2 + 3) x 4 = " << product2(2 + 3, 4) << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
