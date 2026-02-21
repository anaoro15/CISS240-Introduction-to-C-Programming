// Name: aoro
// File: a05q03.cpp
//
// Description:
// This program detects whether the distance from the enemy missile to
// the intercept missile is sufficiently close for the intercept missile
// to explode.
// The program accepts 4 doubles:
// The first three values gives the (x, y, z) position of the enemy missile
// from the intercept missile and the last is the maximum distance the
// intercept should explode to disable the enemy missile.
// The program sets a boolean variable to true exactly when the intercept
// missile should explode and then prints this boolean variable.

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter 4 doubles: ";
    double x, y, z, max_distance;
    std::cin >> x >> y >> z >> max_distance;

    bool explode = (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) <= max_distance);

    std::cout << explode << std::endl;
    
    return 0;
}
