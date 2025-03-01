// DATE.H
// Header for date control

#pragma once

class Date {
  private:
    uint16_t day, month, year;
    bool dateOk;

  public:
    enum class Month { FEBRUARY = 2, JULY = 7 };

    bool isLeapYear() const;
    char lastDayOfMonth() const;
    void validateDate();
    void changeDate(uint16_t d, uint16_t m, uint16_t y);
    void showDate() const;
    Date();
};
