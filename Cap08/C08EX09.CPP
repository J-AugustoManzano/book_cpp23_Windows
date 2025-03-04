// C08EX09.CPP

#include <iostream>

using namespace std;

class Employee
{
  protected:
    string name;
    double salary;

  public:
    Employee(const string &name, double salary)
      : name(name), salary(salary) {}

    virtual void calculateSalary(void)
    {
      cout << "Salary of " << name;
      cout << ": $" << salary << endl;
    }

    virtual ~Employee() {}
};

class Manager : public Employee
{
  private:
    double bonus;

  public:
    Manager(const string &name, double salary, double bonus)
      : Employee(name, salary), bonus(bonus) {}

    void calculateSalary(void) override
    {
      double totalSalary = salary + bonus;
      cout << "Salary of " << name;
      cout << " (Manager): $" << totalSalary << endl;
    }
};

int main(void)
{
  // Creating direct objects
  Employee emp1("Alice", 4000.0);
  Manager emp2("Bob", 6000.0, 2000.0);

  // Using references to maintain polymorphism
  Employee &ref1 = emp1;
  Employee &ref2 = emp2;

  ref1.calculateSalary(); // Calls base class version.
  ref2.calculateSalary(); // Calls derived class version.

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
