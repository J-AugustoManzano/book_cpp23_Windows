// C07EX06.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  // Definition of the matrix using std::array
  array<array<float, 4>, 10> grades;
  size_t i, j;

  cout << "Reading grades" << endl;

  cout << setprecision(2) << fixed;

  // Input grades
  for (i = 0; i < grades.size(); ++i) {
    cout << endl;
    cout << "Enter the grades for student " << setw(2);
    cout << i + 1 << ":" << endl << endl;
    for (j = 0; j < grades[i].size(); ++j) {
      cout << "Grade " << j + 1 << " = ";
      cin >> grades[i][j];
      cin.ignore(80, '\n');
    }
  }

  // Presentation of grades
  cout << endl;
  cout << "Presentation of grades" << endl;
  cout << endl;
  cout << setw(7) << "Student";
  cout << setw(9) << "Grade1";
  cout << setw(9) << "Grade2";
  cout << setw(9) << "Grade3";
  cout << setw(9) << "Grade4";
  cout << endl << endl;
  for (i = 0; i < grades.size(); i++) {
    cout << setw(7) << i + 1;
    for (j = 0; j < grades[i].size(); j++)
      cout << setw(9) << grades[i][j];
    cout << endl;
  }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
