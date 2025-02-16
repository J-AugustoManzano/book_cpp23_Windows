// C03EX03.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int32_t  a, b, x;

  cout << "Enter the first value ....: "; cin >> a;
  cin.ignore(80, '\n');

  cout << "Enter the second value ...: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  if (a > b) 
    {
      x = a;
      a = b;
      b = x;
    }

  cout << " The sorted values are: " << a;
  cout << " and " << b << "." << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
