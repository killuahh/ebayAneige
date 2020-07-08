#ifndef DATETIME_H
#define DATETIME_H
#include <iostream>

namespace DateTimeManager {
    class DateTime;
    class Date;
    class Time;
}

class DateTimeManager::Date{
    public:
        Date(int, int, int);
        ~Date();

    public:
        std::string get_Date();
       // bool chechk_Date(DateTimeManager::Date &D, std::string  format);
        std::string change_Dateformat(std::string);
        bool compare_Date_localDate(DateTimeManager::Date &D);
        bool compare_Date(DateTimeManager::Date &D);
        std::string get_localDate();
        bool equal_Date(DateTimeManager::Date &first_D, DateTimeManager::Date &second_D);
        bool equal_Date_localDate(DateTimeManager::Date &D);

    public:
        bool operator <(DateTimeManager::Date &D);
        bool operator ==(DateTimeManager::Date &D);
        bool operator >(DateTimeManager::Date &D);
        bool operator !=(DateTimeManager::Date &D);

    private:
        int m_Day, m_Month, m_Year;
};


class DateTimeManager::Time{
    public:
        Time();
        ~Time();
};

class DateTimeManager::DateTime
{
    public:
        DateTime();
        ~DateTime();
};


#endif // DATETIME_H
