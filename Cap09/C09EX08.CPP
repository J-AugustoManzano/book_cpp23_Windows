// C09EX08.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  fstream binFile("EXAMPLE4.BIN", ios::in | ios::binary);

  if (binFile.fail()) {
    cout << "The file does not exist, creating..." << endl;
    binFile.clear();
    binFile.open("EXAMPLE4.BIN", ios::out | ios::binary);

    if (binFile.fail())
      cerr << "Error creating the file." << endl;
    else
      cout << "File created successfully!" << endl;
  }
  else
    cout << "The file already exists." << endl;

  binFile.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
