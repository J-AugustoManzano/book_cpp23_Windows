// APAEX03.CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "calendar.h"

using namespace std;

int main(void)
{

  // bool late {false};
  uint16_t lateDays {0};
  double invoiceValue, finalValue {0.0};
  double discountValue {0.0};
  double interestValue {0.0};
  double lateFeeValue {0.0};
  uint64_t julianDueDate, julianCurrentDate;
  string currentSystemDate, dueDate;
  string sysDay, sysMonth, sysYear;
  string flexNum;
  time_t now = time(0);
  tm *dateTime = localtime(&now);
  ostringstream dateStream;

  sysDay = to_string(dateTime->tm_mday);
  sysMonth = to_string(dateTime->tm_mon + 1);
  sysYear = to_string(dateTime->tm_year + 1900);

  dateStream << setfill('0') << setw(2) << sysMonth << "/";
  dateStream << setfill('0') << setw(2) << sysDay << "/";
  dateStream << setfill('0') << setw(4) << sysYear;

  currentSystemDate = dateStream.str();

  cout << setprecision(2) << fixed << right;

  cout << "XYZ Commercial Ltd." << endl;
  cout << "Date: " << currentSystemDate << endl;
  cout << "--------------------" << endl;
  cout << endl;
  cout << "CASHIER System" << endl;
  cout << endl;

  do
    {
      cout << "Enter due date - MM/DD/YYYY ..: ";
      getline(cin, dueDate);
    }
  while (not validDateFormat(dueDate) or
         not validateDate(dueDate));

  cout << "Enter invoice value $ ........: ";
  cin >> invoiceValue;
  cin.ignore(80, '\n');

  julianDueDate = dateToJulian(dueDate);
  julianCurrentDate = dateToJulian(currentSystemDate);
  lateDays = julianCurrentDate - julianDueDate;

  if (julianCurrentDate < julianDueDate)
    {
      discountValue = 0.035 * invoiceValue;
      finalValue = invoiceValue - discountValue;
    }
  else if (julianCurrentDate == julianDueDate)
    finalValue = invoiceValue;
  else
    {
      interestValue = (0.10 * invoiceValue);
      lateFeeValue = (0.005 * invoiceValue * lateDays);
      finalValue = invoiceValue + interestValue + lateFeeValue;
    }

  cout << endl;
  if (lateDays < 0)
    {
      cout << "Invoice paid before the due date";
      cout << endl;
    }
  else if (lateDays == 0)
    cout << "Invoice paid on the due date" << endl;
  else
    {
      flexNum = (lateDays == 1) ? " day" : " days";
      cout << "Invoice paid with " << lateDays;
      cout << flexNum << " late" << endl;
    }

  cout << endl;
  cout << "Invoice value ...... $ " << setw(10);
  cout << invoiceValue << endl;
  cout << "Interest value ..... $ " << setw(10);
  cout << interestValue << endl;
  cout << "Late fee value ..... $ " << setw(10);
  cout << lateFeeValue << endl;
  cout << "Discount value ..... $ " << setw(10);
  cout << discountValue << endl;
  cout << "Total value ........ $ " << setw(10);
  cout << finalValue << endl;

  cout << endl;
  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
