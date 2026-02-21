// Name: aoro
// File: a04q02.cpp
//
// Description
// This program prompts the user for 5 numbers and calculates the standard
// deviation of those numbers, printing the solution on the screen.
// It uses the standard formula for numbers average and standard deviation.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int x0, x1, x2, x3, x4;
    std::cout << "Enter 5 numbers: ";
    std::cin >> x0 >> x1 >> x2 >> x3 >> x4;

    double avg = (x0 + x1 + x2 + x3 + x4) / (double)5; // calculating the average and
                                                       // performing type promotion to double

    double stnd_dev_formula_wout_sqrt =  (pow(x0 - avg, 2)        // standard deviation formula
                                          + pow(x1 - avg, 2)      // without the square root
                                          + pow(x2 - avg, 2)
                                          + pow(x3 - avg, 2)
                                          + pow(x4 - avg, 2)) / 5; 

    double standard_deviation = sqrt(stnd_dev_formula_wout_sqrt);

    std::cout << std::fixed << std::setprecision(5)
              << "Standard deviation of these 5 numbers is: \n"
              << standard_deviation << std::endl;
    
    return 0;
}
