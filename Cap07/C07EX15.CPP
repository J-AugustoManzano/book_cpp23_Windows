// C07EX15.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct StudentRecord {
  string name;
  array<float, 4> grades;
  float average;
};

int main(void)
{
  vector<StudentRecord> students(8);
  StudentRecord x;
  float sum_gr, sum_av, overall_avg;

  cout << setprecision(2) << fixed;

  cout << "Student Registration" << endl << endl;

  for (int i = 0; i <= 7; ++i) {
    cout << "Enter " << setw(2) << i + 1 << "st name: ";
    getline(cin, students[i].name);
    cout << endl;
    cout << "Enter the grades:" << endl << endl;
    for (int j = 0; j <= 3; ++j) {
      cout << setw(2) << j + 1 << "st grade: ";
      string inputGrade;
      getline(cin, inputGrade);
      students[i].grades[j] = stof(inputGrade);
    }
    cout << endl;
  }

  sum_av = 0;
  for (size_t i = 0; i <= 7; ++i) {
    sum_gr = 0;
    for (size_t j = 0; j <= 3; ++j)
      sum_gr += students[i].grades[j];
    students[i].average = sum_gr / 4;
    sum_av += students[i].average;
  }
  overall_avg = sum_av / 8;

  for (size_t i = 0; i <= 6; ++i)
    for (size_t j = i + 1; j <= 7; ++j)
      if (students[i].name > students[j].name) {
        x = students[i];
        students[i] = students[j];
        students[j] = x;
      }

  cout << endl << "General Report" << endl << endl;
  cout << left << setw(41) << "Student";
  cout << right << setw(7) << "Grade1";
  cout << setw(7) << "Grade2";
  cout << setw(7) << "Grade3";
  cout << setw(7) << "Grade4";
  cout << setw(8) << "Average" << endl << endl;

  for (size_t i = 0; i <= 7; ++i) {
    cout << left << setw(41) << students[i].name;
    cout << right;
    for (size_t j = 0; j <= 3; ++j)
      cout << setw(7) << students[i].grades[j];
    cout << setw(8) << students[i].average << endl;
  }

  cout << endl;
  cout << setw(70) << "Overall Average = ";
  cout << setw(7) << overall_avg << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
