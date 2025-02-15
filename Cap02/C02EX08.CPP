#include <iostream> 
using namespace std;

int main(void)
{
  float hw, wg, dp, dt, gp, np;

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
  cout << "Gross Pay ....: " << gp << endl;
  cout << "Deductions ...: " << dt << endl;
  cout << "Net Pay ......: " << np << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
