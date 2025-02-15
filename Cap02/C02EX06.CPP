// C02EX06.CPP

#include <iostream>
#include <cwchar>

using namespace std;

int main(void)
{

  setlocale(LC_ALL, ".1252");

  wchar_t character1 = L'\u00AE';
  wchar_t character2 = L'\U000000AE';
  wchar_t character3 = L'\xAE';
  wchar_t phrase[19] = L"Registered trademark \u00AE";

  wcout << L"Character 1 ..: " << character1 << endl;
  wcout << L"Character 2 ..: " << character2 << endl;
  wcout << L"Character 3 ..: " << character3 << endl;
  wcout << L"Text .........: " << phrase << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();  
  return 0;
}
