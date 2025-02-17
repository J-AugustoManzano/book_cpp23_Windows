// APBEX05.CPP

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &phrase)
{
  string cleanedPhrase, reversedPhrase;

  for (char c : phrase)
    if (isalnum(c))
      cleanedPhrase += tolower(c);

  reversedPhrase = cleanedPhrase;
  reverse(reversedPhrase.begin(), reversedPhrase.end());

  return cleanedPhrase == reversedPhrase;
}

int main(void)
{
  string phrase;

  cout << "Enter a phrase: ";
  getline(cin, phrase);

  if (isPalindrome(phrase))
    cout << "The phrase is a palindrome." << endl;
  else
    cout << "The phrase is not a palindrome." << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
