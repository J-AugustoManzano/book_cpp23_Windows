// C09EX07.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream file("EXAMPLE4.BIN", ios::binary | ios::in);

  if (file.fail()) {
    cerr << "The file could not be opened" << endl;
    cerr << "***  non-existent file  ***" << endl;
  } else {
    cout << "*** The file was opened ***" << endl;
    file.close();
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
