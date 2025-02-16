// C04EX09.CPP

#include <iostream>

using namespace std;

int main(void)
{
  float n;

  while (true)
  {
    cout << "Enter a numeric value: ";
    if (cin >> n)
      break; 
    else
    {
      cout << "Error: enter only numeric value" << endl;
      cin.clear();
      cin.ignore(10000, '\n'); 
    }
  }

  cin.ignore(80, '\n');

  cout << "The result is: " << n + 5 << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
