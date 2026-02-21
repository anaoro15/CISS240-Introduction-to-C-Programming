// Name: aoro
// File: a09q05.cpp
//
// Description:
// THis program prompts the user for an integer variable n and prints solutions to:
// x^3 + y^3 = z
// for positive integers x, y, z where z runs from 0 to n.
// It prints out x, y, and z only when there
// is at least one solution.

#include <iostream>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    int zscore = 0, xscore = 0, yscore = 0;
    
    for (int z = 0; z <= n; ++z)
    {
        if (z == zscore + 1)
        {
            std::cout << '\n';
        }
        for (int x = 0; x <= z; ++x)
        {
            for (int y = x; y <= z; ++y)
            {
                if (pow(x, 3) + pow(y, 3) == z && x != 0 && y != 0)
                {               
                    if (zscore != z)
                    {
                        std::cout << z << ": " << x << ',' << y;
                    }
                    if (zscore == z && xscore != x && yscore != y)
                    {
                        std::cout << ' ' << x << ',' << y;
                    }
                    zscore = z;
                    xscore = x;
                    yscore = y;
                }
            }
        }
    }
    std::cout << std::endl;
    
    return 0;
}
