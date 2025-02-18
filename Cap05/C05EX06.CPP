// C05EX06.CPP
// Sum and Parity Check

#include <iostream>
#include <string>

using namespace std;

void pause(void)
{
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

int16_t sumx(int16_t a, int16_t b, string &message)
{
  if (a % 2 == 0 and b % 2 == 0)
    message = "The provided values are even";
  else 
    if (a % 2 != 0 and b % 2 != 0)
      message = "The provided values are odd";
    else
      message = "The provided values are mixed";
  return a + b;
}

int main(void)
{
  int16_t v1, v2;
  string m;

  cout << "Enter the first value ...: "; cin >> v1;
  cin.ignore(80, '\n');

  cout << "Enter the second value ..: "; cin >> v2;
  cin.ignore(80, '\n');

  cout << "Result of the sum .......: " << sumx(v1, v2, m);
  cout << endl;
  cout << "Status of the values ....: " << m;
  cout << endl;

  pause();
  return 0;
}
