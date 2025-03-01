// APAEX04.CPP

#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

const string months[] = {
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December"
};

int main(int argc, char *argv[])
{
  uint16_t day, month, year;
  string date;

  if (argc != 2)
  {
    cout << "Usage: fulldate.exe \"MM/DD/YYYY\"" << endl;
    cout << "Error in date input." << endl;
    cout << endl;
    return 1;
  }

  date = argv[1];

  if (not validDateFormat(date))
  {
    cout << "Incorrect format. Use MM/DD/YYYY." << endl;
    cout << endl;
    return 1;
  }

  if (not validateDate(date))
  {
    cout << "Invalid date." << endl;
    cout << endl;
    return 1;
  }

  month = getMonth(date);
  day = getDay(date);
  year = getYear(date);

  cout << months[month - 1] << " " << day;
  cout << ", " << year << endl;

  return 0;
}
