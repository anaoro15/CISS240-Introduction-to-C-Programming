// Name:
// File: a09q04.cpp
//
// Description:
// This program prompts the user for an integer z and finds all positive (i.e., less least
// zero) integer solutions to the equation
//  x^3 + y^3 = z 
// Doesn't list repeats. For instance when z is 1729


#include <iostream>
#include <cmath>

int main()
{
    int z;
    std::cin >> z;

    for (int x = 0; x <= z; ++x)
    {
        for (int y = x; y <= z; ++y)
        {
            if (pow(x, 3) + pow(y, 3) == z)
            {
                std::cout << x << "," << y << ' ';
            }
        }
    }
    std::cout << std::endl;
    return 0;
}
