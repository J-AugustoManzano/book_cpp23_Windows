// APAEX07.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

uint16_t weekdayIndex(uint16_t day, uint16_t month, uint16_t year)
{
  uint16_t index, k, j;

  if (month < 3)
  {
    month += 12;
    year--;
  }
  k = year % 100;
  j = year / 100;
  index = ((day + 13 * (month + 1) / 5 + k + k / 4 + j / 
      4 - 2 * j) % 7) + 1;
  return (index + 5) % 7;
}

void displayCalendar(uint16_t year)
{
  string monthName;
  uint16_t daysInMonth, weekday;

  if (year >= 1583 && year <= 9999)
  {
    cout << "Calendar for " << year << ":" << endl;
    cout << endl;

    for (uint16_t month = 1; month <= 12; ++month)
    {
      cout << "---------------------------" << endl;
      switch (month)
      {
        case  1: monthName = "January";       break;
        case  2: monthName = "February";      break;
        case  3: monthName = "March";         break;
        case  4: monthName = "April";         break;
        case  5: monthName = "May";           break;
        case  6: monthName = "June";          break;
        case  7: monthName = "July";          break;
        case  8: monthName = "August";        break;
        case  9: monthName = "September";     break;
        case 10: monthName = "October";       break;
        case 11: monthName = "November";      break;
        case 12: monthName = "December";      break;
        default: monthName = "Invalid month"; break;
      }
      cout << monthName << endl;
      cout << "---------------------------" << endl;
      cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

      // Convert month and year to string format "MM/01/YYYY"
      string dateStr = (month < 10 ? "0" : "") + 
          to_string(month) + "/01/" + to_string(year);
      daysInMonth = lastDayOfMonth(dateStr);
      weekday = weekdayIndex(1, month, year);

      // Fill the empty spaces at the beginning of the month
      for (uint16_t i = 0; i < weekday; ++i)
        cout << "    ";

      for (uint16_t day = 1; day <= daysInMonth; ++day)
      {
        cout << setw(3) << day << " ";

        ++weekday;
        if (weekday > 6)
        {
          weekday = 0;
          cout << endl;
        }
      }

      cout << endl << endl;
    }
  }
  else
    cout << "Invalid year!" << endl;
}

int main(void)
{
  uint16_t year;

  cout << "Enter year between 1583 and 9999: ";
  cin >> year;
  cin.ignore(80, '\n');
  cout << endl;

  displayCalendar(year);

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
