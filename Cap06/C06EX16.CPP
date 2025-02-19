// C06EX16.CPP

#include <iostream>

using namespace std;

int32_t sum(int32_t a, int32_t b)
{
  return a + b;
}

int32_t subtract(int32_t a, int32_t b)
{
  return a - b;
}

int32_t (*operation(char op))(int32_t, int32_t)
{
  if (op == '+')
    return sum;
  if (op == '-')
    return subtract;
  return nullptr;
}

int main(void)
{

  char op;
  int32_t a, b;

  cout << "Enter operator (+ or -): ";
  cin >> op;
  cin.ignore(80, '\n');

  int32_t (*function)(int32_t, int32_t) = operation(op);

  if (op == '+' || op == '-')
    {
	  
      cout << "Enter 1st number: ";
      cin >> a;
      cin.ignore(80, '\n');

      cout << "Enter 2nd number: ";
      cin >> b;
      cin.ignore(80, '\n');

      cout << "Result: " << function(a, b) << endl;
    
    }
  else
    {
      cout << endl;
      cerr << "Invalid operator." << endl;
    }

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
