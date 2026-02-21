// Name: aoro
// File: a05q01.cpp
//
// Description:
// This program prompts the user for three integers for the length of the
// triangle and displays whether the three integers form the sides of a
// right-angled triangle.
// it will display 1 if  the  three  sides  represents  a  right-angled
// triangle and 0 otherwise.
// The third  integer entered is the largest of the three.

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter three integers for the lenght of the triangle a, b, c: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    bool is_rt_angle_triangle = ((pow(a, 2) + pow(b, 2)) == pow(c, 2));
    std::cout << is_rt_angle_triangle << '\n';
    
    return 0;
}
