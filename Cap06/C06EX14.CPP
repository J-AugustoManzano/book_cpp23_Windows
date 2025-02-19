// C06EX14.CPP

#include <iostream>

using namespace std;

int32_t sum(int32_t a, int32_t b)
{
  return a + b;
}

int32_t subtract(int32_t a, int32_t b)
{
  return a - b;
}

int main(void)
{

  int32_t (*functionPtr)(int32_t, int32_t);
  int32_t result;

  functionPtr = sum; // or functionPtr = &sum;
  result = functionPtr(5, 2);
  cout << "Sumition result .......: " << result << endl;

  functionPtr = subtract; // or functionPtr = &subtract;
  result = functionPtr(5, 2);
  cout << "Subtraction result ....: " << result << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
