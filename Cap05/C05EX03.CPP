// C05EX03.CPP
// Factorial Program

#include <iostream>
using namespace std;

void pause(void)
{
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

void factorial(uint16_t n)
{
  uint64_t fact {1};
  for (uint16_t i = 1; i <= n; i++)
    fact *= i;
  cout << "\nFactorial of " << n << " = " << fact << endl;
}

int main(void)
{
  uint16_t x;
  cout << "Factorial Calculation" << endl;
  cout << "\nEnter an integer value: "; cin >> x;
  cin.ignore(80, '\n');
  factorial(x);
  factorial(6);
  pause();
  return 0;
}
