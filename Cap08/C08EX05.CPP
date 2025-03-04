// C08EX05.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class Series {
  private:
    char series;

  public:
    void SetSeries(char series) {
      this->series = series;
    }

    char GetSeries() const {
      return series;
    }
};

class Room {
  protected:
    int32_t room;

  public:
    void SetRoom(int32_t room) {
      this->room = room;
    }

    int32_t GetRoom() const {
      return room;
    }
};

class Student : public Room, public Series {
  private:
    string name;
    vector<float> grades;
    float average;

  public:
    Student() : grades(5) {}
    void SetName(string name);
    string GetName(void) const;
    void SetGrade(char GT[6], int32_t pos);
    float GetGrade(int32_t pos) const;
    void CalculateAverage(void);
    float GetAverage(void) const;
};

void Student::SetName(string name) {
  this->name = name;
}

string Student::GetName(void) const {
  return name;
}

void Student::SetGrade(char GT[6], int32_t pos) {
  grades[pos] = atof(GT);
}

float Student::GetGrade(int32_t pos) const {
  return grades[pos];
}

void Student::CalculateAverage(void) {
  average = 0;
  for (float g : grades)
    average += g;
  average /= grades.size();
}

float Student::GetAverage(void) const {
  return average;
}

int main(void) {
  cout << setprecision(2) << fixed;

  Student student;
  string name;
  char inputGrade[6];
  char inputRoom[6];
  char schoolSeries;

  cout << "Student Registration" << endl;
  cout << endl;

  cout << "Enter the name .....: ";
  getline(cin, name);
  student.SetName(name);

  cout << "Enter the room .....: ";
  cin.getline(inputRoom, sizeof(inputRoom));
  student.SetRoom(atoi(inputRoom));

  cout << "Enter the series ...: ";
  cin >> schoolSeries;
  student.SetSeries(schoolSeries);
  cin.ignore();
  cout << endl;

  cout << "Enter the grades:" << endl;
  cout << endl;
  for (size_t i = 0; i < 5; ++i) {
    cout << setw(2) << i + 1;
    switch (i + 1) {
      case  1: cout << "st"; break;
      case  2: cout << "nd"; break;
      case  3: cout << "rd"; break;
      default: cout << "th"; break;
    }
    cout << " grade .........: ";
    cin.getline(inputGrade, sizeof(inputGrade));
    student.SetGrade(inputGrade, i);
  }
  cout << endl;

  student.CalculateAverage();

  cout << endl;
  cout << "Report" << endl;
  cout << endl;
  cout << "Name ..........: " << student.GetName() << endl;
  cout << "Room ..........: " << student.GetRoom() << endl;
  cout << "Series ........: " << student.GetSeries() << endl;
  cout << endl;
  for (size_t i = 0; i < 5; ++i) {
    cout << setw(2) << i + 1;
    switch (i + 1) {
      case  1: cout << "st"; break;
      case  2: cout << "nd"; break;
      case  3: cout << "rd"; break;
      default: cout << "th"; break;
    }
    cout << " grade ....: ";
    cout << setw(5) << student.GetGrade(i) << endl;
  }
  cout << endl;

  cout << "Average .......: ";
  cout << setw(5) << student.GetAverage();
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
