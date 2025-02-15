// C02EX04.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string name;

  cout << "Hello.\nWhat is your name? ";
  getline(cin, name);

  cout << endl;
  cout << "Hi " << name << ", let's study." << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
