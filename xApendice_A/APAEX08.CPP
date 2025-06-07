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

  // Birth date: day, month, and year
  int16_t birthDay = getDay(birthDate);
  int16_t birthMonth = getMonth(birthDate);
  int16_t birthYear = getYear(birthDate);

  // Current date: day, month, and year
  int16_t currentDay = currentTime->tm_mday;
  int16_t currentMonth = currentTime->tm_mon + 1;
  int16_t currentYear = currentTime->tm_year + 1900;

  // Calculate age
  y = currentYear - birthYear;
  m = currentMonth - birthMonth;
  d = currentDay - birthDay;

  if (d < 0) { // If the day has not occurred this month
    m--;

    // Adjust to get days of the previous month
    int16_t prevMonth = currentMonth - 1;
    int16_t prevYear = currentYear;
    if (prevMonth == 0) {
      prevMonth = 12;
      prevYear--;
    }

    // Build string in "DD/MM/YYYY" format
    char buffer[11];
    snprintf(buffer, sizeof(buffer), "01/%02d/%04d", 
      prevMonth, prevYear);
    std::string prevDate(buffer);

    d += lastDayOfMonth(prevDate);
  }

  if (m < 0) { // If the month has not occurred this year
    y--;
    m += 12;
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
