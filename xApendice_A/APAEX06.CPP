// APAEX06.CPP
// Computus Algorithm

#include <iostream>
#include <iomanip>
#include "calendar.h"

using namespace std;

string calculateEaster(uint16_t year) {
  uint16_t cent = year / 100;
  uint16_t yr = year - 100 * cent;
  uint16_t x = (5 * cent + yr) / 19;
  uint16_t lunarA = 5 * cent + yr - 19 * x;
  uint16_t leap = (3 * (cent + 25)) / 4;
  uint16_t afterLeap = 3 * (cent + 25) - 4 * leap;
  uint16_t oct = (8 * (cent + 11)) / 25;
  x = (19 * lunarA + leap - oct) / 30;
  uint16_t day = 19 * lunarA + leap - oct - 30 * x;
  uint16_t mon = (lunarA + 11 * day) / 319;
  uint16_t afterMon = (60 * (5 - afterLeap) + yr) / 4;
  uint16_t afterYr = 60 * (5 - afterLeap) + yr - 4 * 
      afterMon;
  x = (2 * afterMon - afterYr - day + mon) / 7;
  uint16_t easterDay = 2 * afterMon - afterYr - day + 
      mon - 7 * x;
  uint16_t easterMon = (day - mon + easterDay + 110) / 30;
  uint16_t finalEasterDay = day - mon + easterDay + 110 - 30 
      * easterMon;
  uint16_t finalDay = finalEasterDay + 5 - easterMon;
  string dayFmt = (finalDay < 10) ? "0" + to_string(finalDay) 
      : to_string(finalDay);
  string monFmt = (easterMon < 10) ? "0" + 
      to_string(easterMon) : to_string(easterMon);
  string yearFmt = to_string(year);
  return monFmt + "/" + dayFmt + "/" + yearFmt;
}

int main(void)
{
  uint16_t year;
  string easterDate;
  uint64_t jd;

  do {
    cout << "Enter year (1583-9999): ";
    cin >> year;
    cin.ignore(80, '\n');

    if (year < 1583 || year > 9999)
      cout << "Year out of range." << endl;

  } while (!(year >= 1583 && year <= 9999));

  easterDate = calculateEaster(year);
  jd = dateToJulian(easterDate);

  cout << endl;
  cout << "Carnival on ........: " << julianToDate(jd - 47);
  cout << endl;
  cout << "Easter on ..........: " << easterDate << endl;
  cout << "Corpus Christi on ..: " << julianToDate(jd + 60);
  cout << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
