// Name: aoro
// File: a04q04.cpp
//
// Description:
// This program prompts the user for doubles a, b, A, c, d, B and n
// and prints the solution. The values for a, b, A, c, d, B,
// determines the equations: ax + by = A and cx + dy = B.
// The doubles printed must be to n decimal places in fixed point
// format where the value of n is the last user-input value.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, A, c, d, B;
    int n;
    std::cout << "Enter double values for the first equation a, b, A: ";
    std::cin >> a >> b >> A;
    std::cout << "Enter double values for the second equation c, d, B: ";
    std::cin >> c >> d >> B;
    std::cout << "Enter and integer n for number of decimal places: ";
    std::cin >> n;
    
    double det = a * d - b * c;
    double x = (A * d - b * B) / det;
    double y = (a * B - c * A) / det;

    std::cout << std::fixed << std::setprecision(n)
              << a << "x + " << b << "y = " << A
              << '\n'
              << c << "x + " << d << "y = " << B
              << std::endl;

    std::cout << std::fixed << std::setprecision(n)
              << "solution: x = " << x
              << " y = " << y
              << std::endl;

    return 0;
}
