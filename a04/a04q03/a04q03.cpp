// Name: aoro
// File: a04q03.cpp
//
// Description:
// This program prompts the user for a, b, c, d, e, f and integer value for
// integer variable n and prints the product (ax^2 + bx + c) * (dx^2 + ex + f).
// The integer n represents the n decimal places in fixed point format for
// printing out the doubles.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c, d, e, f;
    int n;
    std::cout << "Enter 6 double values and 1 integer value: ";
    std::cin >> a >> b >> c >> d >> e >> f >> n;


    std::cout << std::fixed << std::setprecision(n)
              << "(" << a << "x^2 + " << b << "x + " << c << ")"
              << "(" << d << "x^2 + " << e << "x + " << f << ")"
              << " =  \n"
              << a * d << "x^4 + " << a * e + b * d << "x^3 + "
              << a * f + b * e + c * d << "x^2 + "
              << b * f + c * e << "x + " << c * f 
              << std::endl;
    
    return 0;
}
