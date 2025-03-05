// EXAMPLE05.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  char* content;
  size_t size;
  ifstream binFile("EXAMPLE2.BIN", ios::binary | ios::in);

  if (not binFile) {
    cerr << "Error opening the file." << endl;
    return 1;
  }

  cout << "Presentation of 5 numeric values:" << endl;
  cout << endl;

  size = num.size() * sizeof(float);
  content = reinterpret_cast<char*>(num.data());

  binFile.read(content, size);

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Registered value " << i + 1 << ": ";
    cout << num[i] << endl;
  }

  binFile.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
