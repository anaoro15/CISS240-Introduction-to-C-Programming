// Name: aoro
// File: a06q04.cpp
//
// Description:
// This program prompts the user for four numbers where the first two
// are the end points of a closed interval and the next two numbers
// are the end points of another interval.
// The program prints 1 if the two intervals overlap, and 0 if the
// two intervals do not overlap.

#include <iostream>

int main()
{
    double a, b, c, d;
    std::cout << "Enter two end points for two intervals: ";
    std::cin >> a >> b >> c >> d; // intervals [a, b] and [c, d]

    bool intercepting = (d >= a && c <= b);


    if (intercepting)
        {
            std::cout << true << std::endl;
        }

    else
        {
            std::cout << false << std::endl;
        }
    
    return 0;
}
