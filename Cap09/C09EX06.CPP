// C09EX06.CPP

#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

void pause(void) {
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

int main(void)
{
  int32_t num;
  char resp{'Y'};
  fstream binFile("EXAMPLE3.BIN",
    ios::binary | ios::in | ios::out | ios::app);

  cout << "Input values" << endl;
  cout << endl;

  if (not (binFile.is_open() == true)) {
    cerr << "Error opening the file." << endl;
    cerr << "Program aborted." << endl;
    pause();
    return 1;
  }

  do {
    cout << "Enter an integer: ";
    cin >> num;
    cin.ignore(80, '\n');

    binFile.write(reinterpret_cast<char*>(&num), sizeof(num));

    cout << "Do you want to continue?" << endl;
    cout << "Press [Y] for YES | any other letter for NO: ";
    cin.get(resp);
    cin.ignore();
    cout << endl;
  } while (toupper(resp) == 'Y');

  binFile.clear();
  binFile.seekg(0, ios::beg);

  cout << "Values in the file: ";
  while (true) {
    binFile.read(reinterpret_cast<char*>(&num), sizeof(num));
    if (binFile.gcount() == 0)
      break;
    cout << num << " ";
  }
  cout << endl;

  binFile.close();

  pause();
  return 0;
}
