// Name: aoro
// File: a12q06.cpp
//
// Description
// This program creates a function for a "3x + 1" problem.

#include <iostream>

//------------------------------------------------------------------------
// The function T returns T(n) where:
// if n is odd, T(n) = 3 * n + 1
// if n is even, T(n) = n / 2 (integer division)
// (This function has no output.)
//------------------------------------------------------------------------
int T(int n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return 3 * n + 1;
    }
    return 0;
}
//------------------------------------------------------------------------
// The function print_3x_plus_1(n) prints the sequence of integers on
// applying T until 1 is reached.
//
// Example: On calling print_3x_plus_1(3),
// 3 10 5 16 8 4 2 1
// is printed.
//------------------------------------------------------------------------
void print_3x_plus_1(int n)
{
    std::cout << n << ' ';
    while (n != 1)
    {
        std::cout << T(n) << ' ';
        n = T(n);
    }
    std::cout << '\n';
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    for (int n = a; n <= b; ++n)
    {
        print_3x_plus_1(n);
    }
    return 0;
}
