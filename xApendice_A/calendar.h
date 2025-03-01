// CALENDAR.H
// Header for calendar control

#include <iostream>
#include <string>
#include <cmath>
#include <vector>

template <typename NewType, typename OldType>
NewType convert(OldType base)
{
  return static_cast<NewType>(base);
}

// Operational functionalities
bool validDateFormat(const std::string &date)
{
  if (date.length() != 10)
    return false;

  if (date[2] != '/' or date[5] != '/')
    return false;

  for (size_t i = 0; i <= 9; i++) {
    if (i == 2 or i == 5)
      continue;
    if (not std::isdigit(date[i]))
      return false;
  }

  return true;
}

uint16_t getDay(std::string dt)
{
  return std::stoi(dt.substr(3, 2));
}

uint16_t getMonth(std::string dt)
{
  return std::stoi(dt.substr(0, 2));
}

uint16_t getYear(std::string dt)
{
  return std::stoi(dt.substr(6, 4));
}

bool isLeapYear(std::string dt)
{
  uint16_t year {getYear(dt)};

  return
  (
    (year % 400 == 0) or
    (year % 4 == 0 and year % 100 != 0)
  );
}

uint16_t lastDayOfMonth(std::string dt)
{
  uint16_t month {getMonth(dt)};

  if (month == 2)
    return (isLeapYear(dt)) ? 29 : 28;

  if (month == 4 or month == 6 or month == 9 or month == 11)
    return 30;

  return 31;
}

bool validateDate(std::string dt)
{
  uint16_t day {getDay(dt)};
  uint16_t month {getMonth(dt)};
  uint16_t year {getYear(dt)};

  return (year >=    1) and
         (year <= 9999) and
         (month >=   1) and
         (month <=  12) and
         (day >=     1) and
         (day <= lastDayOfMonth(dt)) and
    not ((year == 1582) and
         (month ==  10) and
         (day >=     5) and
         (day <=    14));
}

uint64_t dateToANSI(std::string dt)
{
  std::string date;
  date.reserve(11);

  for (char character : dt)
    if (std::isdigit(character))
      date.push_back(character);

  date = date.substr(4, 4) +
         date.substr(0, 2) +
         date.substr(2, 2);

  return std::stoul(date);
}

uint64_t dateToJulian(std::string dt)
{
  float a, b, c, d, e;
  uint64_t j;

  uint16_t day {getDay(dt)};
  uint16_t month {getMonth(dt)};
  uint16_t year {getYear(dt)};
  uint64_t date {dateToANSI(dt)};

  if (month < 3)
    {
      year = year - 1;
      month = month + 12;
    }

  if (date >= 15821015) // 10/15/1582
    {
      a = convert<uint64_t>(year / 100);
      b = convert<uint64_t>(a / 4);
      c = 2 - a + b;
    }
  if (date <= 15821004) // 10/04/1582
    c = 0;

  d = convert<uint64_t>(365.25 * (year + 4716));
  e = convert<uint64_t>(30.6001 * (month + 1));
  j = convert<uint64_t>(d + e + day + 0.5 + c - 1524.5);

  return j;
}

std::string julianToDate(uint64_t jd)
{
  char buffer[11];
  float a, d, e, f, g, h, i, j, k, l, m;

  a = convert<float>(jd);

  if (a < convert<float>(2299161))
    d = a;

  if (a > convert<float>(2299160))
    {
      e = convert<uint64_t>((a - 1867216.25) / 36524.25);
      d = a + 1 + e - convert<uint64_t>(e / 4);
    }

  f = d + 1524;
  g = convert<uint64_t>((f - 122.1) / 365.25);
  h = convert<uint64_t>(g * 365.25);
  i = convert<uint64_t>((f - h) / 30.6001);
  j = f - h - convert<uint64_t>(i * 30.6001);

  if (i < 14)
    k = i - 1;

  if (i > 13)
    k = i - 13;

  if (k > 2)
    l = g - 4716;

  if (k < 3)
    l = g - 4715;

  if (l > 0)
    m = l;

  if (l < 1)
    m = l * (-1) + 1;

  snprintf(buffer, 11, "%02.f/%02.f/%04.f", k, j, m);

  return std::string(buffer);
}

uint16_t dayOfWeek(std::string dt)
{
  return convert<uint16_t>((dateToJulian(dt) + 2) % 7);
}

std::string dayOfWeekFull(std::string dt,
                                  std::string language)
{
  uint16_t dw = dayOfWeek(dt) - 1;
  std::string dayOfWeek;

  std::string daysOfWeekPt[] = {
    "Domingo",
    "Segunda-feira",
    "Terca-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sabado"
  };

  std::string daysOfWeekEs[] = {
    "Domingo",
    "Lunes",
    "Martes",
    "Miercoles",
    "Jueves",
    "Viernes",
    "Sabado"
  };

  std::string daysOfWeekEn[] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"
  };

  if (dw < 0 or dw > 6)
    return "Invalid date";
  if (language == "pt")
    return daysOfWeekPt[dw];
  if (language == "es")
    return daysOfWeekEs[dw];
  if (language == "en")
    return daysOfWeekEn[dw];

  return "Language not supported";
}
