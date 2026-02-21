// Name: aoro
// File: a08q01.cpp
//
// Description:
// This program prompts the user for an integer n and prints a table of squares,
// cubes, and fourth powers from 1 to n. In the output below, the column widths are all set to 10.
// Assume that the user will always enter an integer greater than 0.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter n number of squares: ";
    int n;
    std::cin >> n;
    
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

    for (int i = 1; i <= n; i++)
    {
        std::cout << std::right << std::setw(10) << i
                  << std::right << std::setw(10) << i * i
                  << std::right << std::setw(10) << i * i * i
                  << std::right << std::setw(10) << i * i * i * i
                  << std::endl;
    }
    return 0;
}
    
    
