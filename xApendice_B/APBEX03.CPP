// APBEX03.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string word;
  int strLength;
    
  cout << "Enter a word: ";
  cin >> word;
  cin.ignore(80, '\n');
    
  strLength = word.length();
    
  for (int i = 0; i < strLength; ++i) {
    for (int j = 0; j < strLength - i - 1; ++j)
      cout << " ";
    cout << word.substr(strLength - i - 1) << endl;
  }
    
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
