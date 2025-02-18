// C05EX04.CPP
// Factorial Program

#include <iostream>
using namespace std;

void pause(void)
{
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

void factorial(uint16_t n, uint64_t &fact)
{
  uint16_t i;
  fact = 1;
  for (i = 1; i <= n; i++)
    fact *= i;
}

int main(void)
{
  uint16_t x;
  uint64_t y;
  cout << "Factorial Calculation" << endl;
  cout << "\nEnter an integer value: "; cin >> x;
  cin.ignore(80, '\n');
  factorial(x, y);
  cout << "\nFactorial of " << x << " = " << y << endl;
  pause();
  return 0;
}
