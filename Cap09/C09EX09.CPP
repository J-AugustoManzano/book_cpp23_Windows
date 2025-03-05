// C09EX09.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

int main(void)
{
  int32_t value;
  char* content = reinterpret_cast<char*>(&value);
  size_t size = sizeof(value);
  char resp;
  ofstream binFile;

  binFile.open("EXAMPLE5.BIN", ios::app | ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  cout << "SEQUENTIAL REGISTRATION OF VALUES" << endl;

  do {
    cout << endl;
    cout << "Enter a value: ";
    cin >> value;
    cin.ignore(80, '\n');
    binFile.write(content, size);
    cout << endl;
    cout << "Do you want to continue? " << endl;
    cout << "[Y] Yes \n[any letter] No\n\n--> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'Y');

  binFile.close();

  pausa();
  return 0;
}
