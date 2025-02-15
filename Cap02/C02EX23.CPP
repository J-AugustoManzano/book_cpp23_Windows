// C02EX23.CPP

#include <iostream>
#include <print>

using namespace std;

int main(void)
{
  println("Combined .: {:*<+10.2f}, {:+#09X}", 3.14159, 10);
  println("Values ...: {}, {}", 10'000., 100'000.);

  println("");
  print("Press <Enter> to exit... ");
  cin.get();
  return 0;
}
