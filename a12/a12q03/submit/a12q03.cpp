// Name: aoro
// File: a12q03.cpp
//
// Description
// This program is creating a function is_leap_year()


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
int main()
{
    int y;
    std::cin >> y;
    std::cout << is_leap_year(y) << std::endl;
    return 0;
}
