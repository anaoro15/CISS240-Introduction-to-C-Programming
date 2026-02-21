// Name: aoro
// File: a12q02.cpp
// Description
// This program accepts A, B, C, N and then analyzes all the polynomials
// p(x) = a x2 + b x + c
// for a ranging from 1 to A (inclusive), b ranging from 1 to B (inclusive),
// c ranging from 1 to C (inclusive) and reporting the number of x
// ranging from 0 to N (inclusive) such that p(x) is prime.
// Finally, it prints the polynomial that represents the
// most primes. If there’s a tie, it reports the
// one that is smallest according to “dictionary order”,
// i.e., the one that appears first.

#include <iostream>
#include <iomanip>
#include <cmath>

bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        for (int d = 2; d <= sqrt(n); ++d)
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
    int A, B, C, N;
    std::cin >> A >> B >> C >> N;

    int max = 0;;
    int final_max = max;
    int a_max;
    int b_max;
    int c_max;
    
        for (int a = 1; a <= A; ++a)
        {
            for (int b = 1; b <= B; ++b)
            {
                for (int c = 1; c <= C; ++c)
                {
                    int num_of_primes = 0;
                   
                    for (int x = 0; x <= N; ++x)
                    {
                        int function = (a * x * x) + (b * x) + c;
                        if (isprime(function))
                        {
                            ++num_of_primes;
                        }
                    }
                    
                    if (num_of_primes > max)
                    {
                        max = num_of_primes;
                    }
                    
                    std::cout << std::setw(5) << a << "x^2 +"
                              << std::setw(5) << b << "* x +"
                              << std::setw(5) << c << ":"
                              << std::setw(5) << num_of_primes << std::endl;
                    
                    if (max > final_max)
                    {
                        final_max = max;
                        a_max = a;
                        b_max = b;
                        c_max = c;
                    }
                    
                }
            }
                                
        }
        
        std::cout << "largest: " << '\n'
                  << std::setw(5) << a_max << "x^2 +"
                  << std::setw(5) << b_max << "x +"
                  << std::setw(5) << c_max << ":"
                  << std::setw(5) << final_max << std::endl;                    
    
    return 0;
}
