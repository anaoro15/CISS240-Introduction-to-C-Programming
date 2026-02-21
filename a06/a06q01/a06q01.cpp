// Name: aoro
// File: a06q01.cpp
//
// Description:
// This program prompts the user for a year and prints either leap
// year or not leap year according to the rule:
// The year has to be evenly divisible by 4, except for centennial years
// (those ending in 00), which receive the extra day only if they are
// evenly divisible by 400.

#include <iostream>

int main()
{
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;

    bool leap_year = ((year % 4 == 0 && year % 100 != 0)||
                      (year % 400 == 0));
    
    if (leap_year == true)
    {
        std::cout << "leap year" << std::endl;
    }

    else
    {
        std::cout << "non leap year" << std::endl;
    }
    
    return 0;
}
