// C07EX09.CPP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(void)
{
  size_t size;
  vector<float> matrix;

  cout << setprecision(2) << fixed;

  cout << "Enter the number of elements: ";
  cin >> size;
  cin.ignore(80, '\n');

  // Resize the vector to the specified size
  matrix.resize(size);

  cout << endl;
  for (size_t i = 0; i < size; ++i) {
    cout << "Enter a value for variable MATRIX[";
    cout << i + 1 << "] = ";
    cin >> matrix[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "The entered values are:" << endl;
  cout << endl;
  for (size_t i = 0; i < size; ++i) {
    cout << "MATRIX[" << i + 1 << "] = ";
    cout << setw(4) << matrix[i] << endl;
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
