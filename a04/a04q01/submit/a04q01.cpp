//Name: aoro
// File: a04q01.cpp
//
// Description
// This program prompts the user for a, b, c and prints the solutions to
// the quadratic equation ax^2 + bx + c = 0. This program assumes that the
// polynomial ax^2 + bx + c has two real roots.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "Enter three double values: \n";
    std::cin >> a >> b >> c;
    
    double root_part_of_function;
    root_part_of_function = sqrt(b * b - 4 * a * c);

    double quadratic_equation_plus;
    quadratic_equation_plus =  (-b - root_part_of_function) / (2 * a);

    double quadratic_equation_minus;
    quadratic_equation_minus =  (-b + root_part_of_function) / (2 * a);
    
    std::cout << std::fixed << std::setprecision(5)
              << quadratic_equation_plus << ' '
              << quadratic_equation_minus << std::endl;
    return 0;
}
