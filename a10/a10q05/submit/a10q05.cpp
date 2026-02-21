#include <iostream>
#include <cmath>

bool isPolindrome(int x)
{
    int N = 0;
    
    if (x == 0)
    {
        N = 1;
    }
    else
    {
        int t = x;
        while(t > 0)
        {
            t /= 10;
            ++N;
            
        }
    }

    
    for (int i = 0; i < N / 2; ++i)
    {
        int j = N - 1 - i;
        int x_i = x / int(pow(10, N - 1 - i)) % 10;
        int x_j = x / int(pow(10, i)) % 10; 
     
        if (x_i != x_j)
        {
            return false;
        }
    }
    
    return true; 
}

int main()
{
    int x;
    std::cin >> x;

    std::cout << isPolindrome(x) << std::endl;
    
    return 0;
}
