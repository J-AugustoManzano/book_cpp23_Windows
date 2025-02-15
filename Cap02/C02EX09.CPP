// C02EX09.CPP

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float hw, wg, dp, dt, gp, np;

  cout << setprecision(2) << fixed << right;

  cout << "Enter the number of hours worked ......: "; 
  cin >> hw;
  cin.ignore(80, '\n');

  cout << "Enter the hourly wage .................: "; 
  cin >> wg;
  cin.ignore(80, '\n');

  cout << "Enter the discount percentage value ...: "; 
  cin >> dp;
  cin.ignore(80, '\n');

  gp = hw * wg;
  dt = (dp / 100) * gp;
  np = gp - dt;

  cout << "\n";
  cout << "Gross Pay ....: " << setw(8) << gp << endl;
  cout << "Deductions ...: " << setw(8) << dt << endl;
  cout << "Net Pay ......: " << setw(8) << np << endl;

  cout << "\n";
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
