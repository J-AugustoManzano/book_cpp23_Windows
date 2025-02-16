// C03EX07.CPP

#include <iostream>
#include <ciso646>

using namespace std;

int32_t event1, event2;

int main(void)
{

  cout << "Enter \"1\" if the athlete scored in 1st event.";
  cout << endl;

  cout << "Enter \"1\" if the athlete scored in 2nd event.";
  cout << endl;

  cout << "Any other value if they did not score." << endl;
  cout << endl;

  cout << "Event 1: ";
  cin >> event1;
  cin.ignore(80, '\n');

  cout << "Event 2: ";
  cin >> event2;
  cin.ignore(80, '\n');

  if ((event1 == 1) xor (event2 == 1))
    cout << "Athlete completes the 3rd event." << endl;
  else {
    cout << "Athlete skips the 3rd event." << endl;
    if ((event1 == 1) && (event2 == 1))
      cout << "Qualified for the final." << endl;
    else
      cout << "Disqualified from the competition." << endl;
  }

  cout << endl;

  cout << "Press <Enter> to exit... ";
  cin.get();
  return 0;
}
