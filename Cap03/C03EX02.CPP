// C03EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int32_t a, b;

  cout << "Enter the value <A>: "; cin >> a;
  cin.ignore(80, '\n');
  
  cout << "Enter the value <B>: "; cin >> b;
  cin.ignore(80, '\n');

  cout << "\n";
  
  if (int32_t r = a + b; r > 10)
    cout << "Result = " << r << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
