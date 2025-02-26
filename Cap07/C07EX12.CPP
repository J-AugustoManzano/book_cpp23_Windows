// C07EX12.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t i, j;
  uint32_t rows, columns;

  cout << "Enter the number of rows ...: ";
  cin >> rows;
  cin.ignore(80, '\n');

  cout << "Enter the number of columns ..: ";
  cin >> columns;
  cin.ignore(80, '\n');

  vector<vector<uint32_t>>
    matrix(rows, vector<uint32_t>(columns));

  cout << endl;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      cout << "Enter value for matrix[";
      cout << i + 1 << "," << j + 1 << "] = ";
      cin >> matrix[i][j];
      cin.ignore(80, '\n');
    }
  }

  cout << endl;
  cout << "The entered values are:\n" << endl;

  // Displaying the matrix values
  for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
      cout << "MATRIX[" << i + 1 << "," << j + 1 << "] = ";
      cout << setw(4) << matrix[i][j] << endl;
    }
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
