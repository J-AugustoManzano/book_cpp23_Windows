// APBEX04.CPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(const string &phrase)
{
  string cleanedPhrase;
  int start, end;

  for (char c : phrase)
    if (isalnum(c))
      cleanedPhrase += tolower(c);

  start = 0;
  end = cleanedPhrase.length() - 1;

  while (start < end) {
    if (cleanedPhrase[start] != cleanedPhrase[end])
      return false;
    start++;
    end--;
  }

  return true;
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
