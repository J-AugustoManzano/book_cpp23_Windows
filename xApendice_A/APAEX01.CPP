// APAEX01.CPP

#include <iostream>
#include <string>   // Function: substr()
#include "date.h"   // Function: changeDate(), showDate()

using namespace std;

int main(void)
{
  Date date;
  string dts;
  uint16_t day, month, year;

  cout << "Enter a date in the format MM/DD/YYYY: ";
  getline(cin, dts);

  month = stoi(dts.substr(0, 2));
  day   = stoi(dts.substr(3, 2));
  year  = stoi(dts.substr(6, 4));

  date.changeDate(day, month, year);
  date.showDate();

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
