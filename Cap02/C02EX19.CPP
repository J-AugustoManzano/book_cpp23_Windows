// C02EX19.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("NUmbers: {}, {} e {}", 1, 3, 2);
  println("Numbers: {0}, {2} e {1}", 1, 3, 2);

  println("");
  print("Press <Enter> to exit... ");
  cin.get(); 
  return 0;
}
