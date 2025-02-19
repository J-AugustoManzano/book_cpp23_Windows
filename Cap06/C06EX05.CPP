// C06EX05.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a, *pa = &a;

  cout << "Enter an integer value: ";
  cin >> *pa;
  cin.ignore(80, '\n');

  cout << "\nEntered value = " << a << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
