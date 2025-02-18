// C05EX05.CPP
// Factorial Program

#include <iostream>
using namespace std;

void pause(void)
{
  cout << "\nPress <Enter> to exit... ";
  cin.get();
}

uint64_t factorial(int n)
{
  uint16_t i;
  uint64_t fact = 1;
  for (i = 1; i <= n; i++)
    fact *= i;
  return fact;
}

int main(void)
{
  uint16_t x;
  cout << "Factorial Calculation\n";
  cout << "\nEnter an integer value: "; cin >> x;
  cin.ignore(80, '\n');
  cout << "\nFactorial of " << x << " = ";
  cout << factorial(x) << endl;
  pause();
  return 0;
}
