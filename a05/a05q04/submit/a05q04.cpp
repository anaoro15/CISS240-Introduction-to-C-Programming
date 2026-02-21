// Name: aoro
// File: a05q04.cpp
//
// Description:
// This program prompts the user for 4 integers that represent time, sets
// a boolean variable to true exactly when the time entered is valid, and
// then prints the boolean variable.
// The 4 integer values are as follows:
// The first integer is 0 if the time entered is in 12–hour format;
// it is 1 if the time entered is in 24–hour format
// The second integer represents the hour.
// The third integer represents the minute.
// The fourth integer represents the second.

#include <iostream>
#include <cmath>
#include <ctime>

int main()
{
    std::cout << "Enter four integers that represents time: ";
    int x0, x1, x2, x3;
    std::cin >> x0 >> x1 >> x2 >> x3;

    bool b = (x0 == 0
              && (x1 >= 1 && x1 <= 12)
              && (x2 >= 1 && x2 <= 12)
              && (x3 >= 1 && x3 <= 12))
              || (x0 == 1
                  && (x1 >= 0 && x1 <= 23)
                  && (x2 >= 0 && x2 <= 23)
                  && (x3 >= 0 && x3 <= 23));
    // true only if one of these two conditions is true
    // either 12 hour or 24 hour format

    std::cout << b << std::endl;
    
    return 0;
}
