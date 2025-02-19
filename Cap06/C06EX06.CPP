// C06EX06.CPP

#include <iostream>

using namespace std;

int main(void)
{
	
  int32_t  a = 1;
  int32_t  *pa = nullptr;

  pa = &a;

  cout << "Current address ............: " << pa << endl;

  pa++;
  cout << "Next address forward .......: " << pa << endl;

  pa++;
  cout << "Next address forward .......: " << pa << endl;

  pa--;
  cout << "Previous address backward ..: " << pa << endl;

  pa--;
  cout << "Previous address backward ..: " << pa << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
