// Name: aoro
// File: a10q02.cpp
//
// Description:
// This program continually prompts the user for doubles, printing the number
// of terms entered, the running sum, the running average, the running minimum and the
// running maximum, until the user enters 0.
// Except for the printing of the number of terms entered,
// all other output must be in fixed point format and set to precision of 5.
// If no data is entered, the program prints “no data entered”.

#include <iostream>
#include <iomanip>

int main()
{
    double input;
    std::cin >> input;

    int term = 0;
    double sum = 0.0;
    double average = 0.0;
    double min = input;
    double max = input;
    
    while (input != 0)
    {
        ++term;
        std::cout << term << ' ';
        
        sum += input;
        std::cout << std::setprecision(5) << std::fixed << sum << ' ';

        average = sum / term;
        std::cout << std::setprecision(5) << std::fixed << average << ' ';
        
        if (input < min) min = input;
        std::cout << std::setprecision(5) << std::fixed << min << ' ';

        if (input > max) max = input;
        std::cout << std::setprecision(5) << std::fixed << max << " \n";
        
        std::cin >> input;
        
    }
    return 0;
}
