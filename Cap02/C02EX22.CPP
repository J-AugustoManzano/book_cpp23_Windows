// C02EX22.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Positive with sign ..: {:+}", 10);
  println("With blank space ....: {: }", 10);

  println("");
  print("Press <Enter> to exit... ");
  cin.get();
  return 0;
} 
