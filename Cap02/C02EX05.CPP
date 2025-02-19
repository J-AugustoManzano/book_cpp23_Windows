// C02EX05.CPP

#include <iostream>
#include <locale>    // for setlocale()
#include <windows.h> // for SetConsoleCP()
#include <string>    // for using std::wstring

using namespace std;

int main(void)
{
  wstring name;

  setlocale(LC_ALL, "Portuguese_Brazil.1252");
  SetConsoleCP(1252);

  wcout << L"Hello.\nWhat is your name? ";
  getline(wcin, name);

  cout << endl;
  wcout << L"Hi " << name << L", let's study." << endl;
  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
