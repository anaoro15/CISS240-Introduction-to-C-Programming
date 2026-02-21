// Name: aoro
// File: a05q02.cpp
//
// Description:
// This program prompts the user for three integers and print 1 if the
// integers are in ascending order and 0 otherwise.

#include <iostream>

int main()
{
    std::cout << "Enter three integers: ";
    int x0, x1, x2;
    std::cin >> x0 >> x1 >> x2;

    bool order = (x0 <= x1 && x1 <= x2);

    std::cout << order << std::endl;

    return 0;

}
