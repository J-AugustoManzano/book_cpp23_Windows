// EXAMPLE04.CPP

#include <iostream>
#include <fstream>
#include <array>

using namespace std;

int main(void)
{
  array<float, 5> num;
  const char* content;
  size_t size;
  ofstream binFile("EXAMPLE2.BIN", ios::binary | ios::trunc);

  if (not binFile) {
    cerr << "Error opening the file." << endl;
    return 1;
  }

  cout << "Enter 5 numeric values:" << endl;
  cout << endl;

  for (size_t i = 0; i < num.size(); ++i) {
    cout << "Enter value " << i + 1 << ": ";
    cin >> num[i];
    cin.ignore(80, '\n');
  }

  content = reinterpret_cast<const char*>(num.data());
  size = num.size() * sizeof(float);

  binFile.write(content, size);

  binFile.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
