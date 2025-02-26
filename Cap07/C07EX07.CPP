// C07EX07.CPP

#include <iostream>
#include <iomanip>
#include <array>
#include <string> // For using string

using namespace std;

int main(void)
{
  // Definition of the array using std::array
  array<string, 10> name;
  size_t i;

  cout << "Reading and presenting names" << endl;
  cout << endl;

  // Input names
  for (i = 0; i < name.size(); ++i) {
    cout << "Enter the " << setw(2) << i + 1;
    cout << "st name: ";
    getline(cin, name[i]);
  }
  cout << endl;

  // Presentation of names
  for (i = 0; i < name.size(); ++i) {
    cout << setw(2) << i + 1 << " name: " << name[i] << endl;
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
} 
