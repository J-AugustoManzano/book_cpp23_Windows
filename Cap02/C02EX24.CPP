// C02EX24.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Real {1:8.2f} - Integer {0}", 1, 1.5);

  println("");
  print("Press <Enter> to exit... ");
  cin.get();
  return 0;
}
