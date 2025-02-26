// C07EX04.CPP

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(void)
{
  array<int32_t, 5> a;
  int32_t sum = 0;

  cout << right;
  cout << "Sum of Odd Elements" << endl;
  cout << endl;

  // Data input
  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << "Enter element ";
    cout << setw(1) << i + 1 << ": ";
    cin >> a[i];
    cin.ignore(80, '\n');
  }

  // Processing odd elements
  for (size_t i = 0; i < a.size(); ++i)
    if (a[i] % 2 != 0)
      sum += a[i];

  // Presentation of the sum
  cout << "\nThe sum of the odd elements is: ";
  cout << sum << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
