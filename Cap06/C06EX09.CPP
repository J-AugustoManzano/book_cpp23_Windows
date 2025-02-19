// C06EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t age = 25;
  int32_t *agePointer1 = nullptr, *agePointer2 = nullptr;

  agePointer1 = &age;
  agePointer2 = agePointer1;

  cout << "Variable AGE .........: " << age << endl;
  cout << "Pointer AGEPOINTER1 ..: " << agePointer1 << endl;
  cout << "Pointer AGEPOINTER2 ..: " << agePointer2 << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
