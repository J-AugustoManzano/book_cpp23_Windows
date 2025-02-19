// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int16_t age = 25;
  int16_t *agePointer = nullptr;

  agePointer = &age;

  cout << "AGE    = " << age << " | Addr: = " << &age;
  cout << endl;
  cout << "OLDPTR = " << *agePointer << " | Addr: = ";
  cout << &agePointer;
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
