// APAEX08.CPP

#include <iostream>
#include <string>
#include <ctime>
#include "calendar.h"

using namespace std;

void age(string birthDate, int16_t &y, int16_t &m, int16_t &d)
{
  time_t t = time(nullptr);
  tm* currentTime = localtime(&t);

  // Birth date: month, day, and year
  int16_t birthMonth = getMonth(birthDate);
  int16_t birthDay = getDay(birthDate);
  int16_t birthYear = getYear(birthDate);

  // Current date: month, day, and year
  int16_t currentMonth = currentTime->tm_mon + 1;
  int16_t currentDay = currentTime->tm_mday;
  int16_t currentYear = currentTime->tm_year + 1900;

  // Calculate age
  y = currentYear - birthYear;
  m = currentMonth - birthMonth;
  if (m < 0) { // If the month has not occurred this year
    y--;
    m += 12;
  }
  d = currentDay - birthDay;
  if (d < 0) { // If the day has not occurred this month
    m--;
    d += lastDayOfMonth(birthDate);
  }
}

int main(void)
{
  string birthDate;
  int16_t years, months, days;

  cout << "Enter birth date (MM/DD/YYYY): ";
  cin >> birthDate;
  cin.ignore(80, '\n');

  if (validDateFormat(birthDate) && validateDate(birthDate)) {
    age(birthDate, years, months, days);
    cout << "Age: ";
    cout << years  << " years, ";
    cout << months << " months, and ";
    cout << days  << " days." << endl;
  }
  else
    cout << "Invalid date" << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
