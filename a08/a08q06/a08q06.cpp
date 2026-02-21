// Name: aoro
// File: a08q06.cpp
//
// Description:
// This program accepts a strictly positive (> 0) integer n from the user and then,
// finds and prints the longest sequence of consecutive digits in ascending order
// in the integer n going from left to right.

#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;

    
    int cres = 0, res = 0, clength = 1, length = 1;

    int n0, n1, n2, n3, n4, n5, n6, n7, n8;

    for (int i = n; i = 0; i /= 10)
    {
        n0 = i % 10;
        n1 = i % 100 / 10;
        if (n1 = n0 - 1 && n1 / 10 != 0)
        {
            ++clength;
            cres = n % 100;
        }
    }
    std::cout << clength << ' ' << cres << std::endl;
    return 0;
}
