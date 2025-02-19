// C06EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t age = 25;
  int16_t *agePointer = &age;

  cout << "The age " << *agePointer << " is" << endl;
  cout << "at the memory address " << agePointer << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
