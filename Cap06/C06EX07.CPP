// C06EX07.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t age = 25;
  int32_t *agePointer = nullptr;

  agePointer = &age;

  cout << "Variable AGE ....: " << age << endl;
  cout << "Pointer AGE .....: " << agePointer << endl;

  (*agePointer)++;

  cout << "Variable AGE ....: " << age << endl;
  cout << "Pointer AGE .....: " << agePointer << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
