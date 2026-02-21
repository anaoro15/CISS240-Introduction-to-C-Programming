// Name: aoro
// File: a12q05.cpp


#include <iostream>
#include <iomanip>
#include <cmath>

//------------------------------------------------------------------------
// This function returns true if year is a leap year. Otherwise false is
// returned.
// (This function has no output.)
//------------------------------------------------------------------------
bool is_leap_year(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)))
    {
        return true;
    }
    return false;
}
//------------------------------------------------------------------------
// This function returns the number of days in given month and year.
// (This function has no output.)
//------------------------------------------------------------------------
int days_in_month(int month, int year)
{
    if (is_leap_year(year) && month == 2)
    {
        return 29;
    }
    else 
    {
        switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 4:
            case 9:
            case 6:
            case 11:
                return 30;
            case 2:
                return 28;
        }
    }
    return 0;
}

//------------------------------------------------------------------------
// This function prints the calendar of the given month and year.
// The parameter day_of_first is the day of the 1st of the given month
// and year.
//------------------------------------------------------------------------
void print_calendar_month(int month, int year, int day_of_first)
{
    std::cout << year << '\n'
              << "--------------------\n"
              << "Su Mo Tu We Th Fr Sa\n";
    
    for (int i = 0; i < day_of_first; i++)
    {
        std::cout << "   ";
    }
    
    int day_of_week = day_of_first;
    
    for (int day_in_month = 1; day_in_month <= days_in_month(month, year); day_in_month++)
    {
        std::cout << std::setw(2) << day_in_month << ' ';
        day_of_week++;
        if (day_of_week == 7)
        {
            std::cout << std::endl;
            day_of_week = 0;
        }
    }
    std::cout << std::endl;
    
}


int main()
{
    int month, year, day_of_first;
    std::cin >> month >> year >> day_of_first;
    print_calendar_month(month, year, day_of_first);
    return 0;
}
