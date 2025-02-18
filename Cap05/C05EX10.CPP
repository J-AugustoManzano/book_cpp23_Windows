// C05EX10.CPP
// Calculator Program

#include <iostream>
#include <iomanip>
#include "ecra.h"

using namespace std;

float r, a, b;

void pause(void)
{
  cout << "Press <Enter> to exit... ";
  cin.get();
}

void input(void)
{
  setPosition(5, 1);
  cout << "Enter a value for variable [A]: ";
  cin >> a;
  cin.ignore(80, '\n');
  setPosition(6, 1);
  cout << "Enter a value for variable [B]: ";
  cin >> b;
  cin.ignore(80, '\n');
}

float calculate(float a, float b, char operatorChar)
{
  switch (operatorChar)
  {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default:  return 0.0;
  }
}

void output(void)
{
  setPosition(9, 1);
  cout << "The result between A and B = " << setw(8) << r;
  cout << endl;
  setPosition(11, 1);
  pause();
}

void additionRoutine(void)
{
  clearScreen();
  setPosition(1, 1); cout << "Addition Routine";
  setPosition(2, 1); cout << "----------------";
  input();
  r = calculate(a, b, '+');
  output();
}

void subtractionRoutine(void)
{
  clearScreen();
  setPosition(1, 1); cout << "Subtraction Routine";
  setPosition(2, 1); cout << "-------------------";
  input();
  r = calculate(a, b, '-');
  output();
}

void multiplicationRoutine(void)
{
  clearScreen();
  setPosition(1, 1); cout << "Multiplication Routine";
  setPosition(2, 1); cout << "----------------------";
  input();
  r = calculate(a, b, '*');
  output();
}

void divisionRoutine(void)
{
  clearScreen();
  setPosition(1, 1); cout << "Division Routine";
  setPosition(2, 1); cout << "----------------";
  input();
  if (b == 0)
  {
    setPosition(9, 1); cout << "Division error";
    setPosition(11, 1); pause();
  }
  else
  {
    r = calculate(a, b, '/');
    output();
  }
}

int main(void)
{
  int16_t option = 0;
  while (option != 5)
  {
    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);
    clearScreen();
    setPosition( 1, 1); cout << "------------------";
    setPosition( 2, 1); cout << "Calculator Program";
    setPosition( 3, 1); cout << "    Main Menu     ";
    setPosition( 4, 1); cout << "------------------";
    setPosition( 6, 1); cout << "[1] - Addition";
    setPosition( 7, 1); cout << "[2] - Subtraction";
    setPosition( 8, 1); cout << "[3] - Multiplication";
    setPosition( 9, 1); cout << "[4] - Division";
    setPosition(10, 1); cout << "[5] - Exit Program";
    setPosition(12, 1); cout << "Choose an option: ";
    cin >> option;
    cin.ignore(80, '\n');
    if (option != 5)
    {
      switch (option)
      {
        case 1: additionRoutine();       break;
        case 2: subtractionRoutine();    break;
        case 3: multiplicationRoutine(); break;
        case 4: divisionRoutine();       break;
      }
    }
  }
  return 0;
}
