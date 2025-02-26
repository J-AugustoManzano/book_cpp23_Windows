// C07EX08.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  size_t size;
  float *pmatrix;

  cout << setprecision(2) << fixed;

  cout << "Enter the number of elements: ";
  cin >> size;
  cin.ignore(80, '\n');

  pmatrix = new float[size];

  cout << endl;
  for (size_t i = 0; i <= size - 1; ++i) {
    cout << "Enter a value for MATRIX[";
    cout << i + 1 << "] = ";
    cin >> pmatrix[i];
    cin.ignore(80, '\n');
  }
  cout << endl;

  cout << "The entered values are:" << endl;
  cout << endl;
  for (size_t i = 0; i <= size - 1; ++i) {
    cout << "MATRIX[" << i + 1 << "] = ";
    cout << setw(4) << pmatrix[i] << endl;
  }

  delete[] pmatrix;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
