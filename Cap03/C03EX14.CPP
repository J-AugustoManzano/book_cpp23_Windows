// C03EX14.CPP

#include <iostream>

using namespace std;

int main(void)
{
  cout << "Enter a vowel character: ";

  switch (char character = cin.get(); character)
    {
      case  'a': cout << "\nLetter: a\n"; break;
      case  'A': cout << "\nLetter: A\n"; break;
      case  'e': cout << "\nLetter: e\n"; break;
      case  'E': cout << "\nLetter: E\n"; break;
      case  'i': cout << "\nLetter: i\n"; break;
      case  'I': cout << "\nLetter: I\n"; break;
      case  'o': cout << "\nLetter: o\n"; break;
      case  'O': cout << "\nLetter: O\n"; break;
      case  'u': cout << "\nLetter: u\n"; break;
      case  'U': cout << "\nLetter: U\n"; break;
    }
  cin.ignore(80, '\n');

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
