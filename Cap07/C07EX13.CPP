// C07EX13.CPP

#include <iostream>
#include <cctype> // For toupper() and tolower()

using namespace std;

void uplowcase(char *pmatrix, int type) {
  if (type == 1) {
    // Convert to uppercase
    while (*pmatrix)
      cout.put(toupper(*pmatrix++));
  } else {
    // Convert to lowercase
    while (*pmatrix)
      cout.put(tolower(*pmatrix++));
  }
}

int main(void)
{
  char message[50]; // Simulation of a string

  cout << "Enter a message: ";
  cin.getline(message, sizeof(message));

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
