// C07EX11.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	
  size_t i, j;
  uint32_t rows, columns;
  uint32_t **pmatrix;

  cout << "Enter the number of rows ...: ";
  cin >> rows;
  cin.ignore(80, '\n');

  cout << "Enter the number of columns ..: ";
  cin >> columns;
  cin.ignore(80, '\n');

  pmatrix = new uint32_t*[rows];

  for (i = 0; i <= rows - 1; i++)
    pmatrix[i] = new uint32_t[columns];
  cout << endl;

  for (i = 0; i <= rows - 1; i++) {
    for (j = 0; j <= columns - 1; j++) {
      cout << "Enter value for pmatrix[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> pmatrix[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "The entered values are:\n" << endl;
  for (i = 0; i <= rows - 1; i++) {
    for (j = 0; j <= columns - 1; j++) {
      cout << "pmatrix[" << i + 1 << "," << j + 1;
      cout << "] = ";
      cout << setw(4) << pmatrix[i][j] << endl;
    }
  }

  for (i = 0; i <= rows - 1; i++)
    delete [] pmatrix[i];
  delete [] pmatrix;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
