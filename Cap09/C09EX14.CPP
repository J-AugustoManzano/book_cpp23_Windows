// C09EX14.CPP

#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

void pausa(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

struct Person {
  string name;
  uint16_t age;

  void writeFile(ofstream& binFile) {
    uint64_t size = name.size();
    char* nameStr = reinterpret_cast<char*>(&size);
    char* ageStr = reinterpret_cast<char*>(&age);
    binFile.write(nameStr, sizeof(size));
    binFile.write(name.c_str(), size);
    binFile.write(ageStr, sizeof(uint16_t));
  }
};

int main(void)
{
  char resp;
  ofstream binFile("EXAMPLE07.BIN", ios::app | ios::binary);
  if (not binFile) {
    cerr << "Error opening the file." << endl;
    pausa();
    return 1;
  }

  cout << "PERSONAL DATA RECORD REGISTRATION" << endl;

  do {
    cout << endl;
    cout << "Enter name ...: ";
    string name;
    getline(cin, name);
    cout << "Enter age ....: ";
    uint16_t age;
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    Person person;
    person.name = name;
    person.age = age;

    person.writeFile(binFile);

    cout << endl;
    cout << "Do you want to continue? [Y] Yes ";
    cout << "[any other letter] No --> ";
    cin.get(resp);
    cin.ignore();
  } while (toupper(resp) == 'Y');

  binFile.close();

  pausa();
  return 0;
}
