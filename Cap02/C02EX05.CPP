// C02EX05.CPP

#include <iostream>
#include <locale> 

using namespace std;

int main(void)
{
  char name[50];

  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleCP(1252);

  cout << "Olá.\nQual sua graça? "; 
  // for "Hello.\nWhat is your name? "
  cin.getline(name, 50);

  cout << endl;
  cout << "Hi " << name << ", let's study." << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
