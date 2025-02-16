// APCEX01.CPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm> // For std::transform

using namespace std;

int secondsOfDay(const string &time)
{
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    int s = stoi(time.substr(6, 2));
    string period = time.substr(9, 2);

    // Convert period to uppercase
    transform(period.begin(), period.end(), period.begin(), ::toupper);

    if (period == "PM" and h != 12)
        h += 12;
    if (period == "AM" and h == 12)
        h = 0;

    return h * 3600 + m * 60 + s;
}

void displayTime(int seconds)
{
    int h = seconds / 3600;
    int m = (seconds % 3600) / 60;
    int s = seconds % 60;

    cout << setfill('0');
    cout << setw(2) << h << ":";
    cout << setw(2) << m << ":";
    cout << setw(2) << s;
    cout << setfill(' ');
}

bool validTimeFormat(const string &time)
{
    if (time.length() != 11)
        return false;
    if (time[2] != ':' or time[5] != ':')
        return false;

    string period = time.substr(9, 2);
    transform(period.begin(), period.end(), period.begin(), ::toupper);

    if (period != "AM" and period != "PM")
        return false;

    for (int i = 0; i <= 7; ++i) {
        if (i == 2 or i == 5)
            continue;
        if (not isdigit(time[i]))
            return false;
    }
    return true;
}

bool validEntryTime(const string &time)
{
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    int s = stoi(time.substr(6, 2));
    string period = time.substr(9, 2);

    transform(period.begin(), period.end(), period.begin(), ::toupper);

    if (period == "PM" and h != 12)
        h += 12;
    if (period == "AM" and h == 12)
        h = 0;

    return (h >= 8 and h <= 22) and
           ((h != 22) or (m == 0 and s == 0)) and
           (m >= 0 and m <= 59) and
           (s >= 0 and s <= 59);
}

bool validExitTime(const string &time)
{
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));
    int s = stoi(time.substr(6, 2));
    string period = time.substr(9, 2);

    transform(period.begin(), period.end(), period.begin(), ::toupper);

    if (period == "PM" and h != 12)
        h += 12;
    if (period == "AM" and h == 12)
        h = 0;

    return (h >= 8 and h < 23) or
           (h == 23 and m == 0 and s == 0);
}

float calculateCharge(int seconds) {
    const int FIRST_HOUR_SECS = 3600;
    const float FIRST_HOUR_RATE = 5.00;
    const float ADDITIONAL_HOUR_RATE = 1.50;
    if (seconds <= FIRST_HOUR_SECS)
        return FIRST_HOUR_RATE;
    else
        return FIRST_HOUR_RATE + ceil((seconds - FIRST_HOUR_SECS)
               / 3600.0) * ADDITIONAL_HOUR_RATE;
}

int main(void)
{
    string entry, exit;
    int entrySecs, exitSecs, diffSecs;

    cout << fixed << setprecision(2);
    cout << "Parking Lot XPTO-Park" << endl;
    cout << "---------------------" << endl;
    cout << endl;

    do {
        cout << "Enter entry time (HH:MM:SS AM/PM) .: ";
        getline(cin, entry);
    } while (not validTimeFormat(entry) or
             not validEntryTime(entry));

    do {
        do {
            cout << "Enter exit time  (HH:MM:SS AM/PM) .: ";
            getline(cin, exit);
        } while (not validTimeFormat(exit) or
                 not validExitTime(exit));

        entrySecs = secondsOfDay(entry);
        exitSecs = secondsOfDay(exit);

        if (exitSecs <= entrySecs) {
            cout << "Exit time must be later than entry time" << endl;
        }
    } while (exitSecs <= entrySecs);

    diffSecs = exitSecs - entrySecs;

    cout << "Duration ..........................: ";
    displayTime(diffSecs);
    cout << endl;

    cout << "Amount charged ....................: $";
    cout << setw(5) << calculateCharge(diffSecs) << endl;

    cout << endl;
    cout << "Press <Enter> to exit... ";
    cin.get();
    return 0;
}
