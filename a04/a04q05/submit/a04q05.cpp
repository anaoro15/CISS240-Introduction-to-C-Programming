// Name: aoro
// File: a04q05.cpp
//
// Description:
// This program prompts the user for height, wight, lenght of his/her thumb,
// radius of his/her skull, the number of college classes that he/she
// has taken, and number of fingers, and displays the user/s IQ using
// Sigmund Freud's formula for IQ.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double height, weight, thumb_lenght, skull_radius, iq;
    int classes, num_fingers;
    const double PI = 3.14159;

    std::cin >> height >> weight >> thumb_lenght
             >> skull_radius >> classes >> num_fingers;

    iq = PI * pow(skull_radius, 2) + (weight / (height + thumb_lenght))
        * classes + ((double)5 / num_fingers); //Sigmund Freud's iq formula

    std::cout << std::fixed << std::setprecision(2)
              << iq << std::endl;

    return 0;
}
