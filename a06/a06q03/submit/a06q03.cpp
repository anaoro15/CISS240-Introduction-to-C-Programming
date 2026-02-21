// Name: aoro
// File: a06q03.cpp
//
// Description:
// This program prompts the user for a, b, and c (as doubles) and prints
// the solutions of the quadradic equation ax^2 + bx + c = 0 according
// to the rules.
// The output is in fixed point format with 5 decimal places.

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    std::cout << "Enter a, b, and c: ";
    double a, b, c;
    std::cin >> a >> b >> c;

// part of the formula that determines the solutions
    double recipe = pow(b,2) - 4 * a * c;
    
// part of the formula for the solutions 1 and 2;
    double first_part_of_formula = -(b / (2 * a));

// second part of formula for the solutions 1 and 2;
    double second_part_of_formula = sqrt(4 * a * c - pow(b,2)) / (2 * a);

// if recipe >= 0, formula for solutions 3 and 4 are:
    double solution3 = (-b - sqrt(recipe)) / (2 * a);
    double solution4 = (-b + sqrt(recipe)) / (2 * a);
    
    if (recipe < 0)
    {
        std::cout << std::fixed << std::setprecision(5) 
                  << first_part_of_formula << " - " << second_part_of_formula
                  << "i" << ", "
                  << first_part_of_formula << " + " << second_part_of_formula
                  << "i" << std::endl;
    }

    else
    {
        std::cout << std::fixed << std::setprecision(5) 
                  << solution3  << ", " << solution4
                  << std::endl;
    }
                
    return 0;
}
