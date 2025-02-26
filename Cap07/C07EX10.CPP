// C07EX10.CPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <exception>

using namespace std;

int main(void)
{
  vector<int32_t> matrix;
  int32_t value;

  try {
    do {
      cout << "MATRIX[";
      cout << setw(2) << matrix.size() + 1 << "] ";
      cout << "(0 to exit) = ";
      cin >> value;
      cin.ignore(80, '\n');

      if (value != 0)
        matrix.push_back(value);

    } while (value != 0);

    cout << endl;
    cout << "The entered values are:" << endl << endl;

    for (size_t i = 0; i < matrix.size(); ++i) {
      cout << "MATRIX[" << setw(2) << i + 1 << "] = ";
      cout << setw(3) << matrix[i] << endl;
    }

  }
  catch (const bad_alloc &e) {
    cerr << "*** Insufficient memory: ";
    cerr << e.what() << " ***" << endl;
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
