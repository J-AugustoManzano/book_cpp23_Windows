// C06EX01.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t age = 25;
  int16_t *agePointer = nullptr;

  agePointer = &age;

  cout << "The age " << age << " is stored" << endl;
  cout << "at the memory address " << agePointer << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
