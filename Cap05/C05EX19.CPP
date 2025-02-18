// C05EX19.CPP

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
	
  {
    using namespace sum;
    result = 5 + 3;
    std::cout << result << std::endl;
  }

  {
    using namespace quotient;
    result = 5.0 / 3.0;
    std::cout << result << std::endl;
  }

  {
    using namespace product;
    result = 5 * 3;
    std::cout << result << std::endl;
  }

  {
    using namespace difference;
    result = 5 - 3;
    std::cout << result << std::endl;
  }

  std::cout << std::endl;
  std::cout << "Press <Enter> to exit... ";
  std::cin.get();
  return 0;
}
