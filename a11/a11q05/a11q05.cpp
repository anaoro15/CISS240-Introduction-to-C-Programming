// Name: aoro
// File: a11q05.cpp
//
// Description:
// This program performs addition for positive integers up to 1000 digits.
// The program prompts the user for the digits of the two integers to be added.
// The digits are entered separated by spaces.
// The input for each integer is terminated by entering −1.
// The (column) addition performed by the program shows the carries when they are nonzero.

#include <iostream>
#include <cmath>

void input_num1(int x[1000], int SIZE)
{
    
    for (int i = 0; i < SIZE; ++i)
    {
        std::cin >> x[i];
        if (x[i] == -1)
            break;
    }
}

int len(int x[])
{
    int i = 0;
    while(x[i] != -1)
    {
        ++i;
    }
    return i;
}

void reverse_array(int x[1000])
{
    int j = len(x) - 1;
    for (int i = 0; i < len(x) / 2; ++i)
        {
            int t = x[i];
            x[i] = x[j];
            x[j] = t;
            --j;
        } 
}

void sum_array(int sum[1000], int x[1000], int y[1000])
{
    
    int final_len = len(x);
    if (len(y) > final_len) final_len = len(y);
    
    for (int i = 0; i < final_len + 1; ++i) // figure out how to get when to stop the loop
    {
        sum[i] += x[i] + y[i];
            if (sum[i] > 9)
            {
                sum[i] %= 10;
                sum[i + 1] += (sum[i] / 10);
            }       
            std::cout << "sum: " << sum[i] << ' ';
    }
    std::cout << '\n';
}
void print_array(int x[1000])
{
    for (int i = 0; i < len(x); ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    return;
}

int main()
{
    int SIZE = 1000;
    int x[SIZE] = {0};
    int y[SIZE] = {0};
    int sum[SIZE] = {0};

    reverse_array(x);
    input_num1(x, SIZE);
    input_num1(y, SIZE);
    
    reverse_array(x);
    reverse_array(y);
    sum_array(sum, x, y);

    print_array(x);
    print_array(y);
    
    
    return 0;
}
