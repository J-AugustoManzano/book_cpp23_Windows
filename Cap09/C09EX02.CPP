// EXAMPLE02.CPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
  string message;
  ofstream file("EXAMPLE1.TXT", ios::app);

  if (not file) {
    cerr << "Error opening the file." << endl;
    return 1;
  }

  cout << "Enter a message" << endl;
  cout << "--> ";

  getline(cin, message);

  file << message << endl;

  file.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
