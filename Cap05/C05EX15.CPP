// C05EX15.CPP

#include <iostream>

using namespace std;

extern int16_t a;
extern int16_t b;

extern void add(void);

int main(void)
{

  cout << "Enter the first number ..: ";
  cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the second number .: ";
  cin >> b;
  cin.ignore(80, '\n');

  add();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;

}
