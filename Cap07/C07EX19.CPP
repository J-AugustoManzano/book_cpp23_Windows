// C07EX19.CPP

#include <iostream>

using namespace std;

int main(void)
{
  enum class Months {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
  };

  Months month;

  cout << "Test access, enumerated list" << endl;
  cout << endl;

  month = Months::JANUARY;

  cout << "Set month = " << static_cast<int>(month);
  cout << " in full equals to ";

  switch (month) {
    case Months::JANUARY:   cout << "January";   break;
    case Months::FEBRUARY:  cout << "February";  break;
    case Months::MARCH:     cout << "March";     break;
    case Months::APRIL:     cout << "April";     break;
    case Months::MAY:       cout << "May";       break;
    case Months::JUNE:      cout << "June";      break;
    case Months::JULY:      cout << "July";      break;
    case Months::AUGUST:    cout << "August";    break;
    case Months::SEPTEMBER: cout << "September"; break;
    case Months::OCTOBER:   cout << "October";   break;
    case Months::NOVEMBER:  cout << "November";  break;
    case Months::DECEMBER:  cout << "December";  break;
    default:                cout << "Invalid month"; break;
  }

  cout << endl << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();

  return 0;
}
