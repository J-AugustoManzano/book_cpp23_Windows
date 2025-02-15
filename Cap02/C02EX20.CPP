// C02EX20.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Left ....: {:*<8}", 10);
  println("Right ...: {:*>8}", 10);
  println("Center ..: {:*^8}", 10);

  println("");
  print("Press <Enter> to exit... ");
  cin.get();
  return 0;
}
