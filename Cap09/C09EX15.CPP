// C09EX15.CPP

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

struct Person {
  string name;
  uint16_t age;

  bool readFile(ifstream &binFile) {
    uint64_t size;
    char* content = reinterpret_cast<char*>(&size);
    binFile.read(content, sizeof(size));
    if (binFile.peek() == EOF)
      return false;

    vector<char> name(size + 1);
    binFile.read(name.data(), size);
    name[size] = '\0';
    this->name = string(name.data());

    char* data = reinterpret_cast<char*>(&age);
    binFile.read(data, sizeof(age));

    return true;
  }
};

int main(void) {
  Person person;
  ifstream binFile("EXAMPLE07.BIN", ios::in | ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  cout << "PERSONAL DATA RECORDS REPORT" << endl;
  cout << endl;

  cout << setiosflags(ios::left);
  cout << setw(41) << "Name";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw(9) << "Age" << endl;
  cout << endl;

  while (person.readFile(binFile)) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << person.name;
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    cout << setw(9) << person.age << endl;
  }

  binFile.close();

  pausa();
  return 0;
}
