#include "datetime.h"


DateTimeManager::DateTime::DateTime(){}
DateTimeManager::DateTime::~DateTime(){}


DateTimeManager::Date::Date(int day, int month, int year)
    :m_Day(day), m_Month(month), m_Year(year){}
DateTimeManager::Date::~Date(){}

std::string
DateTimeManager::Date::get_Date(){

    std::string
            Date_string,
            Date_arr [] =
    {std::to_string(m_Day),  std::to_string(m_Month), std::to_string(m_Year)};

    for(int i = 0 ; i < Date_arr->size(); i++)
        for(int y= 2-Date_arr[i].size(); y > 0; y--)
            Date_arr[i]= "0" + Date_arr[i];

    Date_string = Date_arr[0] + "." + Date_arr[1] + "." + Date_arr[2];
    return Date_string;
}
bool
DateTimeManager::Date::equal_Date(DateTimeManager::Date &first_D, DateTimeManager::Date &second_D){
return false;
}

