// C06EX11.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t a = 10;
  int32_t b = 20;

  int32_t *pa = nullptr, *pb = nullptr;

  pa = &a;
  pb = &b;

  cout << "Value of PA = " << *pa << " at address = ";
  cout << &pa << endl;

  cout << "Value of PB = " << *pb << " at address = ";
  cout << &pb << endl;

  *pa = *pb;

  cout << "Value of PA = " << *pa << " at address = ";
  cout << &pa << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
