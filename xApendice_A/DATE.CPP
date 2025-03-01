// DATE.CPP
// Code for date control

#include <iostream>
#include "date.h"

Date::Date() : day(0), month(0), year(0), dateOk(false) {}

bool Date::isLeapYear() const {
  return 
  (
    (year % 400 == 0) or
    (year % 4 == 0 and year % 100 != 0)
  );
}

char Date::lastDayOfMonth() const {
  if (month == static_cast<uint16_t>(Month::FEBRUARY))
    return (isLeapYear()) ? 29 : 28;
  else if (month <= static_cast<uint16_t>(Month::JULY))
    return (month % 2 != 0) ? 31 : 30;
  else
    return (month % 2 != 0) ? 30 : 31;
}

void Date::validateDate() {
  dateOk = (year >=    1) and
           (year <= 9999) and
           (month >=   1) and
           (month <=  12) and
           (day >=     1) and
           (day <= lastDayOfMonth()) and
      not ((year == 1582) and
           (month ==  10) and
           (day >=     5) and
           (day <=    14));
}

void Date::changeDate(uint16_t day, uint16_t month, uint16_t year) {
  this->day = day;
  this->month = month;
  this->year = year;
  validateDate();
}

void Date::showDate() const {
  if (dateOk == true) 
  {
      std::cout.fill('0');
      std::cout.width(2); std::cout << month << '/';
      std::cout.width(2); std::cout << day << '/';
      std::cout.width(4); std::cout << year << std::endl;
    }
  else
    std::cout << "**/**/****" << std::endl;
}
