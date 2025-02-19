// C06EX15.CPP

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

int32_t operation(int32_t (*function)(int32_t, int32_t),
  int32_t a, int32_t b) {
  return function(a, b);
}

int main(void)
{

  int32_t result1 = operation(sum, 5, 2);
  int32_t result2 = operation(subtract, 5, 2);

  cout << "Addition result ......: " << result1 << endl;
  cout << "Subtraction result ...: " << result2 << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
