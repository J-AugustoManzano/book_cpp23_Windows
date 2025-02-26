// C07EX02.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{

  array<float, 8> grades;  // Define array with 8 ele-ments

  float sum = 0, average;

  cout << setprecision(2) << fixed;

  cout << "Calculation of Class Average" << endl;
  cout << endl;

  for (size_t i = 0; i < grades.size(); ++i) {
    cout << "Enter the " << i + 1 << "st grade: ";
    cin >> grades[i];
    cin.ignore(80, '\n');
    sum += grades[i];
  }

  average = sum / grades.size();

  cout << endl;
  cout << "Class Average = " << setw(6) << average << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}  
