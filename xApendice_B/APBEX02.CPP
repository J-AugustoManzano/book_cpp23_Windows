// APBEX02.CPP

#include <iostream>
#include <string>

using namespace std;

int main(void) 
{
  string word;
  
  cout << "Please enter a word: ";
  cin >> word;
  cin.ignore(80, '\n');

  for (size_t i = 0; i <= word.length(); ++i)
    cout << word.substr(0, i) << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
