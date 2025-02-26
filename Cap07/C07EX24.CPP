// C07EX24.CPP

#include <iostream>
#include <string>

using namespace std;

using ProductID = int32_t;
using ProductName = string;
using ProductPrice = float;

struct Product
{
  ProductID id;
  ProductName name;
  ProductPrice price;
};

int main(void)
{

  Product p1;
  p1.id = 101;
  p1.name = "T-shirt";
  p1.price = 29.99;

  cout << "Product Information:\n" << endl;
  cout << "ID .......: " << p1.id << endl;
  cout << "Name .....: " << p1.name << endl;
  cout << "Price $ ..: " << p1.price << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
