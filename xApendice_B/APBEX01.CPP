// APBEX01.CPP

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
  return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

string conjugateVerb(const string& verb) {
  uint16_t length = verb.length();

  // Rule 1: Verbs ending in 'e'
  if (length > 0 and verb.back() == 'e') {
    return verb + "d";
  }

  // Rule 2: Verbs ending in consonant + 'y'
  if (length > 1 and verb[length - 1] == 'y' 
    and not isVowel(verb[length - 2])) {
    return verb.substr(0, length - 1) + "ied";
  }

  // Rule 3: Verbs ending in consonant + vowel + consonant (CVC)
  if (length > 2 and not isVowel(verb[length - 1]) 
    and isVowel(verb[length - 2]) and not isVowel(verb[length - 3])) {
    return verb + verb[length - 1] + "ed";
  }

  // Default rule: Add 'ed'
  return verb + "ed";
}

int main(void)
{
  string verb;

  cout << "Enter a regular verb: ";
  getline(cin, verb);
  cout << endl;

  string past = conjugateVerb(verb);

  cout << "I " << past << endl;
  cout << "You " << past << endl;
  cout << "He/She/It " << past << endl;
  cout << "We " << past << endl;
  cout << "They " << past << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
