// C07EX01.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{

  float grades[8], sum = 0, average;

  cout << setprecision(2) << fixed;

  cout << "Calculation of Class Average" << endl;
  cout << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << "Enter the " << i + 1 << "st grade: ";
    cin >> grades[i];
    cin.ignore(80, '\n');
    sum += grades[i];
  }

  average = sum / 8;

  cout << endl;
  cout << "Class Average = " << setw(6) << average << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
