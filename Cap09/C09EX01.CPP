// C09EX01.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  ofstream textFile("EXAMPLE1.TXT", ios::trunc);

  if (!textFile) {
    cerr << "Error creating the file." << endl;
    return 1;
  }

  cout << "File created successfully." << endl;

  textFile.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
