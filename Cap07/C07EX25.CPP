// C07EX25.CPP

#include <iostream>

using namespace std;

#define smallest_value(v1, v2) ((v1 < v2) ? (v1) : (v2))

int main(void)
{
	
  int32_t a, b, resp;

  cout << "Enter the 1st value: "; cin >> a;
  cin.ignore(80, '\n');
  cout << "Enter the 2nd value: "; cin >> b;
  cin.ignore(80, '\n');

  resp = smallest_value(a, b);

  cout << "Smallest value: " << resp << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
