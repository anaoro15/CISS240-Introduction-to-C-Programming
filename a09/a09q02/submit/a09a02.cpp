// Name: aoro
// File: a09q02.cpp
//
// Desciption:
// Write the following program that prints a calendar month. The program prompts the
// user for three integers: the month, the year, and the day–of–week for the first day of the
// month (with 0 representing Sunday, 1 representing Monday, etc.)

#include <iostream>
#include <iomanip>
int main()
{
    int month, year, day_of_week;
    std::cin >> month >> year >> day_of_week;

    int num_days;
    switch (month)
    {
        case 1:
            std::cout << "January " << year << '\n';
            num_days = 31;
            break;
        case 2:
            std::cout << "February " << year<< '\n';
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                num_days = 29;
            else
                num_days = 28;
            break;
        case 3:
            std::cout << "March "<< year<< '\n';
            num_days = 31;
            break;
        case 4:
            std::cout << "April "<< year<< '\n';
            num_days = 30;
            break;
        case 5:
            std::cout << "May "<< year<< '\n';
            num_days = 31;
            break;
        case 6:
            std::cout << "June "<< year<< '\n';
            num_days = 310;
            break;
        case 7:
            std::cout << "July "<< year<< '\n';
            num_days = 31;
            break;
        case 8:
            std::cout << "August "<< year<< '\n';
            num_days = 31;
            break;
        case 9:
            std::cout << "September "<< year<< '\n';
            num_days = 30;
            break;
        case 10:
            std::cout << "October "<< year<< '\n';
            num_days = 31;
            break;
        case 11:
            std::cout << "November "<< year<< '\n';
            num_days = 30;
            break;
        case 12:
            std::cout << "December "<< year<< '\n';
            num_days = 31;
            break;
    }

    std::cout << std::setw(21) << std::setfill('-');
    std::cout << '\n'
              << std::setfill(' ')
              << std::setw(20) << "Su Mo Tu We Th Fr Sa"
              << '\n';

    int i = 1; // first day
    switch(day_of_week)
    {
        case 0:
            std::cout << std::right << std::setw(2) << i;
            break;
        case 1:
             std::cout << std::right << std::setw(5) << i;
            break;
        case 2:
             std::cout << std::right << std::setw(8) << i;
            break;
        case 3:
             std::cout << std::right << std::setw(11) << i;
            break;
        case 4:
             std::cout << std::right << std::setw(14) << i;
            break;
        case 5:
             std::cout << std::right << std::setw(17) << i;
            break;
        case 6:
             std::cout << std::right << std::setw(20) << i;
            break;
    }

        for (int n = 2; n <= num_days; ++n)
        {
            std::cout << std::setw(2) << n << ' ';
            if ((n + day_of_week) % 7 == 0) 
                    std::cout << '\n';  
        }  
    
    std::cout << '\n';
        
    return 0;
}
