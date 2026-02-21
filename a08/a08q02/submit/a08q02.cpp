// Name: aoro
// File: a08q02.cpp
//
// Description:
// This program prompts the user for two integers, start and end, and prints
// a table of squares, cubes, and fourth powers from start to end.
// The column widths are all set to 10. Assume that the user always enters
// integers greater than 0.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter two integers start and end: ";
    int start, end;
    std::cin >> start >> end;
    
    std::cout << std::right << std::setw(10) << "i"
              << std::right << std::setw(10) << "i^2"
              << std::right << std::setw(10) << "i^3"
              << std::right << std::setw(10) << "i^4"
              << '\n' << " " 
              << std::setw(10) << std::setfill('-')<< " " 
              << std::setw(10) << std::setfill('-') << " "
              << std::setw(10) << std::setfill('-') << " "
              << std::setw(10) << std::setfill('-') << " "
              << std::setfill(' ') << std::endl;

    for (int i = start; i <= end; i++)
    {
        std::cout << std::right << std::setw(10) << i
                  << std::right << std::setw(10) << i * i
                  << std::right << std::setw(10) << i * i * i
                  << std::right << std::setw(10) << i * i * i * i
                  << std::endl;
    }
    return 0;
}
    
    
