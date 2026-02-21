// Name: aoro
// File: a10q04.cpp
//
// Description:
// The goal of this program is to prompt the user for a, b and for each
// integer n from a to b (inclusive), print the sum of divisors which are
// strictly less than n, and “perfect”if n is a perfect number,
// and print the total number of perfect numbers found.

#include <iostream>
#include <cmath>
      
int main()
{
    int a, b;
    std::cout << "enter a and b: ";
    std::cin >> a >> b;

    
    int sum_divisors = 0;
    int num_perfect = 0;

    for (int n = a; n <= b; ++n)
    {
        for (int d = 1; d < n; ++d)
        {
            if (n % d == 0)
            {
                sum_divisors += d;
            }
        }
        
        if (sum_divisors == n)
        {
            ++num_perfect;
            if (num_perfect == 1 && n == 6)
            {
                std::cout << "perfect number(s): ";
            }
            std::cout << n << ' ';
        }
       
        sum_divisors = 0;
    }
    std::cout << '\n';
   
    std::cout << "number of perfect numbers found: " << num_perfect << '\n';
    return 0;
}
    
                
                
