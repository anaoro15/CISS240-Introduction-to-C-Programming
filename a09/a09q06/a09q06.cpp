// Name: aoro
// File: ao9q06.cpp
//
// Description:
// This program prints this ASCII art

#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    std::cout << '*';
    for (int i = 0; i < x; ++i)
    {
        if (i > 0)
        {
            std::cout << ' ';
        }
        for (int j = x + (x - 1); j > 0; j -= 2)
        {
            std::cout << ' ';
        }
        std::cout << "*\n";
        
    }
    return 0;
}
