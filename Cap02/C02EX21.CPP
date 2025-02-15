// C02EX21.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Leading zeros ..: {:08}, {:08}", 10, -.2);
  println("Blank spaces ...: {:8d}", 10);
  println("No spaces ......: {:d}", 10);

  println("");
  print("Press <Enter> to exit... ");
  cin.get();
  return 0;
}
