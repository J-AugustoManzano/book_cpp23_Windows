// C01EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
  #if __cplusplus == 199711L
	cout << "Supports C++98" << endl;
  #elif __cplusplus == 201103L
	cout << "Supports C++11" << endl;
  #elif __cplusplus == 201402L
	cout << "Supports C++14" << endl;
  #elif __cplusplus == 201703L
	cout << "Supports C++17" << endl;
  #elif __cplusplus == 202002L
	cout << "Supports porta C++20" << endl;
  #elif __cplusplus == 202302L
	cout << "Supports C++23" << endl;
  #elif __cplusplus > 202302L
	cout << "Supports future versions of C++" << endl;
  #endif
	
  cout << "Press <Enter> to exit... ";
  cin.get();
	
  return 0;
}

