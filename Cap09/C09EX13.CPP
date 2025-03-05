// C09EX13.CPP

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

int main(void)
{
  uint64_t size;
  char* charCount = reinterpret_cast<char*>(&size);
  ifstream binFile("EXAMPLE6.BIN", ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  // Read from the file until the end is reached
  while (binFile.read(charCount, sizeof(size))) {
	// Allocate an extra byte for the null terminator
    vector<char> message(size + 1); 
    // Read the message
    binFile.read(message.data(), size);
    message[size] = '\0'; // Null-terminate the string
    cout << "Message: " << message.data() << endl;
  }

  binFile.close();
  pausa();
  return 0;
}
