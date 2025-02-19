// C06EX08.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t value = 1;
  int32_t *valuePointer = &value;

  cout << "Current address.......: " << valuePointer << endl;

  *(valuePointer += 10);
  cout << "Next address forward..: " << valuePointer << endl;

  *(valuePointer += 10);
  cout << "Next address forward..: " << valuePointer << endl;

  *(valuePointer -= 10);
  cout << "Prev. address backward: " << valuePointer << endl;

  *(valuePointer -= 10);
  cout << "Prev. address backward: " << valuePointer << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
