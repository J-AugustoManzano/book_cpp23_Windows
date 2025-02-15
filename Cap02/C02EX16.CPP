// C02EX16.CPP

#include <iostream>
#include <print>

int main(void)
{
  std::string name = "Bjarne Stroustrup";
  uint16_t age = 75;

  std::print("{} is {} years old.\n", name, age);

  std::println("");
  std::print("Press <Enter> to exit... ");
  std::cin.get();
  return 0;
}
