// C05EX13.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int x;

  cout << "Enter the number [X]: ";
  cin >> x;
  cin.ignore(80, '\n');

  if (x > 5)
    {
      int y = 20;
      cout << "[X] = " << x + y << endl;
    }
  else
    cout << "[X] = " << x << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
