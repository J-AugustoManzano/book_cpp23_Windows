// EXAMPLE03.CPP

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
  char character;
  ifstream file("EXAMPLE1.TXT", ios::in);

  if (not file) {
    cerr << "Error opening the file." << endl;
    return 1;
  }

  while ((character = file.get()) != EOF)
    cout.put(character);

  file.close();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
