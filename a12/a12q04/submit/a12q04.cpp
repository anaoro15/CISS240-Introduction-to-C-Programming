// Name: aoro
// File: a12q04.cpp


#include <iostream>
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
int main()
{
    int m, y;
    std::cin >> m >> y;
    std::cout << days_in_month(m, y) << std::endl;
    return 0;
}
