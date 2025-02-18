// C05EX17.CPP

#include <iostream>

namespace sum
{
  int16_t result;
}

namespace quotient
{
  float result;
}

namespace product
{
  int64_t result;
}

namespace difference
{
  double result;
}

int main(void)
{

  sum::result = 5 + 3;
  std::cout << sum::result << std::endl;

  quotient::result = 5.0 / 3.0;
  std::cout << quotient::result << std::endl;

  product::result = 5 * 3;
  std::cout << product::result << std::endl;

  difference::result = 5 - 3;
  std::cout << difference::result << std::endl;

  std::cout << std::endl;
  std::cout << "Press <Enter> to exit... ";
  std::cin.get();
  return 0;
}
