// C09EX11.CPP

#include <iostream>
#include <iomanip>
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
  uint64_t pos;
  char* content = reinterpret_cast<char*>(&value);
  size_t size = sizeof(value);
  char resp;
  uint64_t fileSize, recordSize, nrRecords;
  fstream binFile;

  binFile.open("EXAMPLE5.BIN", ios::in | ios::out
               | ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  binFile.seekg(0, ios::end);

  fileSize = binFile.tellg();
  recordSize = sizeof(value);
  if (recordSize == 0)
    nrRecords = 0;
  else
    nrRecords = fileSize / recordSize;

  cout << "DIRECT SEARCH AND WRITE OF VALUES" << endl;
  cout << endl;
  if (nrRecords == 0)
    cout << "The file is empty." << endl;
  else
  {
    cout << "The file contains " << nrRecords;
    if (nrRecords == 1)
      cout << " record." << endl;
    else
      cout << " records." << endl;
  }

  do {
    cout << endl;
    cout << "Enter the position to be searched: ";
    cin >> pos;
    cin.ignore(80, '\n');
    cout << endl;
    if (pos >= 1 and pos <= nrRecords) {
      binFile.seekg((pos - 1) * sizeof(value), ios::beg);
      binFile.read(content, size);
      cout << "Value " << value << " at position ";
      cout << pos << endl;
      cout << endl;
      cout << "Enter the new value: ";
      cin >> value;
      cin.ignore(80, '\n');
      cout << endl;
      binFile.seekp((pos - 1) * sizeof(value), ios::beg);
      binFile.write(content, size);
      cout << "Value " << value << " at position ";
      cout << pos << endl;
    }
    else
      cerr << "Invalid position." << endl;
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
