// C05EX02.CPP
// Calculator Program

#include <iostream>
#include <iomanip>
using namespace std;

float r, a, b;

void pause(void)
{
  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
}

void input(void)
{
  cout << "\n";
  cout << "Enter a value for variable [A]: "; cin >> a;
  cin.ignore(80, '\n');
  cout << "Enter a value for variable [B]: "; cin >> b;
  cin.ignore(80, '\n');
}

float calculation(float a, float b, char operation)
{
  switch (operation)
  {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    default:  return 0.0; // Default return value
  }
}

void output(void)
{
  cout << "\n";
  cout << "The result between A and B = " << setw(8);
  cout << r << endl;
  pause();
}

void addition(void)
{
  cout << "\n";
  cout << "Addition Routine" << endl;
  cout << "----------------" << endl;
  input();
  r = calculation(a, b, '+');
  output();
}

void subtraction(void)
{
  cout << "\n";
  cout << "Subtraction Routine" << endl;
  cout << "-------------------" << endl;
  input();
  r = calculation(a, b, '-');
  output();
}

void multiplication(void)
{
  cout << "\n";
  cout << "Multiplication Routine" << endl;
  cout << "-----------------------" << endl;
  input();
  r = calculation(a, b, '*');
  output();
}

void division(void)
{
  cout << "\n";
  cout << "Division Routine" << endl;
  cout << "-----------------" << endl;
  input();
  if (b == 0)
  {
    cout << "\n";
    cout << "Division error" << endl;
    pause();
  }
  else
  {
    r = calculation(a, b, '/');
    output();
  }
}

int main(void)
{
  uint16_t option = 0;
  while (option != 5)
  {
    cout << setprecision(2) << right << fixed;
    cout << "\n";
    cout << "------------------" << endl;
    cout << "Calculator Program" << endl;
    cout << "   Main Menu   " << endl;
    cout << "------------------" << endl;
    cout << "\n";
    cout << "[1] - Addition" << endl;
    cout << "[2] - Subtraction" << endl;
    cout << "[3] - Multiplication" << endl;
    cout << "[4] - Division" << endl;
    cout << "[5] - End Program" << endl;
    cout << "\n";
    cout << "Choose an option: "; cin >> option;
    cin.ignore(80, '\n');
    if (option != 5)
    {
      switch (option)
      {
        case 1: addition();       break;
        case 2: subtraction();    break;
        case 3: multiplication(); break;
        case 4: division();       break;
      }
    }
  }
  return 0;
}
