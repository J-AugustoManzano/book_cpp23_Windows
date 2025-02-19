// C06EX10.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t intValue = 1;
  float floatValue = 2.5;

  void *genericPtr = nullptr;

  genericPtr = &intValue;
  cout << "Integer value .: " << *(int32_t *)genericPtr << endl;

  genericPtr = &floatValue;
  cout << "Float value ...: " << *(float *)genericPtr << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
