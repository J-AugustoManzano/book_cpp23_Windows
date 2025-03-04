// C08EX11.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

using namespace std;

class Student {
  private:
    string name;
    vector<float> grades;
    float average;

  public:
    Student(int32_t numGrades) : grades(numGrades) {}

    void SetName(const string &name) {
      this->name = name;
    }

    string GetName() const {
      return name;
    }

    void SetGrade(float grade, int32_t pos) {
      if (pos >= 0 and static_cast<size_t>(pos) <
        grades.size()) {
        grades[static_cast<size_t>(pos)] = grade;
      }
    }

    float GetGrade(int32_t pos) const {
      if (pos >= 0 and static_cast<size_t>(pos) <
        grades.size()) {
        return grades[static_cast<size_t>(pos)];
      }
      return 0;
    }

    void CalculateAverage() {
      float sum = 0;
      for (float grade : grades) {
        sum += grade;
      }
      average = sum / grades.size();
    }

    float GetAverage() const {
      return average;
    }
};

int main(void) {
  int32_t numStudents, numGrades = 5;
  float overallAverage = 0;
  string name;
  vector<Student> students;

  cout << setprecision(2) << fixed;

  cout << "How many students: ";
  cin >> numStudents;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  students.reserve(static_cast<size_t>(numStudents));

  for (int32_t i = 0; i < numStudents; ++i) {
    cout << endl;
    cout << "Student Registration " << i + 1 << endl;
    cout << endl;
    cout << "Enter the name ..: ";
    getline(cin, name);

    Student student(numGrades);
    student.SetName(name);

    cout << endl;
    cout << "Enter the grades:" << endl;
    cout << endl;
    for (int32_t j = 0; j < numGrades; ++j) {
      float grade;
      cout << j + 1;
      switch (j + 1) {
        case 1: cout << "st"; break;
        case 2: cout << "nd"; break;
        case 3: cout << "rd"; break;
        default: cout << "th"; break;
      }
      cout << " grade .......: ";
      cin >> grade;
      student.SetGrade(grade, j);
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    student.CalculateAverage();
    students.push_back(student);
  }

  cout << endl;
  cout << "General Report" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Student";
  cout << resetiosflags(ios::left);

  cout << setiosflags(ios::right);
  for (int32_t j = 0; j < numGrades; ++j)
    cout << setw(7) << "Grade" << j + 1;
  cout << setw(8) << "Average";
  cout << endl << endl;

  for (const auto &student : students) {
    cout << resetiosflags(ios::right);
    cout << setiosflags(ios::left);
    cout << setw(41) << student.GetName();
    cout << resetiosflags(ios::left);
    cout << setiosflags(ios::right);
    for (int32_t j = 0; j < numGrades; ++j)
      cout << setw(8) << student.GetGrade(j);
    cout << setw(8) << student.GetAverage();
    cout << endl;
    overallAverage += student.GetAverage();
  }

  overallAverage /= numStudents;

  cout << endl;
  cout << setw(82) << "Overall Average = ";
  cout << setw(7) << overallAverage;
  cout << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
