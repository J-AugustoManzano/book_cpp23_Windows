// C08EX01.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Student
{
  public:
    string name;
    vector<float> grades;
    float average;

    Student() : grades(5) {}
    float calculateAverage();
};

float Student::calculateAverage() {
  float sum = 0.0f;
  for (float grade : grades)
    sum += grade;
  average = sum / grades.size();
  return average;
}

int main(void)
{
  cout << setprecision(2) << fixed;

  char inputGrade[6];
  Student student;

  cout << "Student Registration" << endl;
  cout << endl;

  cout << "Enter the name ....: ";
  getline(cin, student.name);
  cout << endl;

  cout << "Enter the grades:" << endl;
  cout << endl;
  for (size_t i = 0; i < student.grades.size(); ++i)
  {
    cout << setw(2) << i + 1;
    switch (i + 1)
    {
      case  1: cout << "st"; break;
      case  2: cout << "nd"; break;
      case  3: cout << "rd"; break;
      default: cout << "th"; break;
    }
    cout << " grade ........: ";
    cin.getline(inputGrade, sizeof(inputGrade));
    student.grades[i] = atof(inputGrade);
  }
  cout << endl;

  student.calculateAverage();

  cout << endl;
  cout << "Report" << endl;
  cout << endl;
  cout << "Name ..............: " << student.name << endl;
  cout << endl;
  for (size_t i = 0; i < student.grades.size(); ++i)
  {
    cout << setw(2) << i + 1;
    switch (i + 1)
    {
      case  1: cout << "st"; break;
      case  2: cout << "nd"; break;
      case  3: cout << "rd"; break;
      default: cout << "th"; break;
    }
    cout << " grade ........: ";
    cout << setw(5) << student.grades[i] << endl;
  }
  cout << endl;

  cout << "Average ...........: " << setw(5);
  cout << student.average;
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
