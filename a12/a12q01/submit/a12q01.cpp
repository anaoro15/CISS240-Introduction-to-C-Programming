// Name: aoro
// File: a12q01.cpp
//
// Description
// This program creates a function isprime()

#include <iostream>
#include <cmath>

bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int d = 2; d < n; ++d)
        {
            if (n % d == 0)
            {
                return false;
            }
        }
    }
    return true;
                
}
int main()
{
    int i;
    std::cin >> i;

    
    std::cout << i << (isprime(i) ? " is prime" : " is not prime")  << std::endl;
    
    return 0;
}
