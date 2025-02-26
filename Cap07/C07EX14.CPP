// C07EX14.CPP

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void uplowcase(const string &message, int type) {
  for (char c : message) {
    if (type == 1) {
      cout.put(toupper(c));
    } else {
      cout.put(tolower(c));
    }
  }
}

int main(void)
{
  string message;

  cout << "Enter a message: ";
  getline(cin, message);
  cout << endl;

  uplowcase(message, 1); // Display in uppercase
  cout << endl;

  uplowcase(message, 2); // Display in lowercase
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
