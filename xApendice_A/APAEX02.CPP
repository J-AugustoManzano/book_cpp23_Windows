// APAEX02.CPP

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

int main(void)
{
	
  uint16_t day, month, year;
  string date;
  string dayOfWeekPt, dayOfWeekEs;
  string dayOfWeekEn, dayOfWeekDe;
  uint64_t julianDate;

  do
    {
      cout << "Enter date in MM/DD/YYYY format: ";
      getline(cin, date);
    }
  while (not validDateFormat(date) or
         not validateDate(date));

  day = getDay(date);
  month = getMonth(date);
  year = getYear(date);

  dayOfWeekPt = dayOfWeekFull(date, "pt");
  dayOfWeekEs = dayOfWeekFull(date, "es");
  dayOfWeekEn = dayOfWeekFull(date, "en");
  dayOfWeekDe = dayOfWeekFull(date, "de");

  julianDate = dateToJulian(date);

  cout.fill('0');
  cout << endl;
  cout << "Entered date ...................: ";
  cout << date << endl;
  cout << "Day ............................: ";
  cout << setw(2) << day << endl;
  cout << "Month ..........................: ";
  cout << setw(2) << month << endl;
  cout << "Year ...........................: ";
  cout << setw(4) << year << endl;
  cout << "Day of the week ................: ";
  cout << dayOfWeek(date) << endl;
  cout << "Leap year ......................: ";
  cout << (isLeapYear(date) ? "Yes" : "No") << endl;
  cout << "Last day of the month ..........: ";
  cout << lastDayOfMonth(date) << endl;
  cout << "Date to Julian day .............: ";
  cout << dateToJulian(date) << endl;
  cout << "Calendar .......................: ";
  if (dateToANSI(date) <= 15821004)
    cout << "Julian" << endl;
  if (dateToANSI(date) >= 15821015)
    cout << "Gregorian" << endl;
  cout << "Julian day to date .............: ";
  cout << julianToDate(julianDate) << endl;
  cout << "Day of the week in Portuguese ..: ";
  cout << dayOfWeekPt << endl;
  cout << "Day of the week in Spanish .....: ";
  cout << dayOfWeekEs << endl;
  cout << "Day of the week in English .....: ";
  cout << dayOfWeekEn << endl;
  cout << "Day of the week in German ......: ";
  cout << dayOfWeekDe << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
