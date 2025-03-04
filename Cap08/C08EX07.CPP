// C08EX07.CPP

#include <iostream>
#include <string>

using namespace std;

class Student
{
  private:
    string name;
    int32_t age;

  public:
    // Constructor
    Student(string name, int32_t age) {
      this->name = name;
      this->age = age;
    }

    // Destructor
    ~Student() {}

    void Introduce() {
      cout << "Name: " << name;
      cout << " is " << age << " years old" << endl;
    }
};

int main(void)
{
	
  // Create objects "student1" and "student2"
  Student student1("James", 20);
  Student student2("Emily", 19);

  // Present the student details
  student1.Introduce();
  student2.Introduce();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
