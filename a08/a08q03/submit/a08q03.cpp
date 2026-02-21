// Name: aoro
// File: a08q03.cpp
//
// Description:
// The program accepts 6 integers a, b, c, d, e, f and lists the integers from e to f (inclusive)
// which are roots of the polynomial ax3 + bx2 + cx + d

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    int root;
    
    for (int i = e; i <= f; ++i)
    {
        if (a * pow(i, 3) + b * pow(i, 2) + c * i + d == 0)
        {
            root = i;
            std::cout << root << " ";
        }
    }
    std::cout << '\n';
    return 0;
}
