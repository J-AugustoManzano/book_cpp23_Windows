// C08EX08.CPP

#include <iostream>
#include <string>

using namespace std;

class Person
{
  protected:
    string name;
    int32_t age;

  public:
    Person() : name(""), age(0) {}

    void enter(const string &n, int32_t i)
    {
      name = n;
      age = i;
    }

    void display(void) const
    {
      cout << "Name ..............: " << name << endl;
      cout << "Age ...............: " << age << endl;
    }
};

class Student : public Person
{
  private:
    string sport;

  public:
    Student() : Person(), sport("") {}

    void enter(const string &n, int32_t i, const string &s)
    {
      Person::enter(n, i);
      sport = s;
    }

    void display(void) const
    {
      Person::display();
      cout << "Sport Activity ....: " << sport << endl;
    }
};

int main(void)
{
	
  Student student;
  string name, sport;
  int32_t age;

  cout << "Student Registration at the Gym" << endl;
  cout << endl;

  cout << "Name ..............: ";
  getline(cin, name);
  cout << "Age ...............: ";
  cin >> age;
  cin.ignore(80, '\n');
  cout << "Sport Activity ....: ";
  getline(cin, sport);

  student.enter(name, age, sport);

  cout << endl;
  cout << "Registered Student Data:" << endl;
  cout << endl;

  student.display();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
