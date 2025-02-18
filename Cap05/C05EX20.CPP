// C05EX20.CPP

#include <iostream>

using namespace std;

int16_t VALUE = 3;

namespace scope1
{
  int16_t VALUE = 2;
  namespace scope2
  {
    int16_t VALUE = 1;
  }
}

int main(void)
{
	
  int16_t VALUE = 4;

  cout << VALUE << endl;
  cout << ::VALUE << endl;
  cout << scope1::VALUE << endl;
  cout << scope1::scope2::VALUE << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
