// C09EX12.CPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

int main(void)
{
  string message;
  uint64_t size;
  char* charCount;
  ofstream binFile("EXAMPLE6.BIN", ios::app | ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  cout << "Enter a message" << endl;
  cout << "--> ";
  getline(cin, message);

  size = message.size();
  charCount = reinterpret_cast<char*>(&size);

  // Write the size of the message (uint64_t) to the file
  binFile.write(charCount, sizeof(size));

  // Write the characters of the message to the file
  binFile.write(message.c_str(), size);

  binFile.close();

  pausa();
  return 0;
}
