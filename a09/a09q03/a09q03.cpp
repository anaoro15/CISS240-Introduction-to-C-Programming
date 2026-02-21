// Name: aoro
// File: a09q03.cpp
//
// Description:
// The program prompts the user for n and a, prints all the solutions,
// and prints the number of solutions
// x ∗ x % n = a % n, where x is an integer between 0 and n − 1

#include <iostream>
#include <cmath>

int main()
{
    int n, a;
    std::cin >> n >> a;
    int num_solutions = 0;

    for (int x = 0; x <= n - 1; ++x)
    {
        bool sq = ((x * x) % n == a % n);
        if (sq)
        {
            std::cout << x << ' ';
            ++num_solutions;
        }
    }
    std::cout << '\n' << num_solutions << std::endl;
    return 0;
}
