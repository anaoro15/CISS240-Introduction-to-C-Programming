// Name: aoro
// File: a11q03.cpp
//
// Description:
// This program

#include <iostream>
void finding_j(int a[10], int SIZE, int j)
{
    int num_of_times = 1;
    for (int i = j; i < SIZE; ++i)
    {
        if ((a[i] == a[j]) && (a[i + 1] == a[j]))
        {
            ++num_of_times; 
        }
    }
    std::cout << num_of_times << std::endl;
}


int main()
{
    const int SIZE = 10;
    int a[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> a[i];
    }
    int j = 0;
    std::cin >> j;

    finding_j(a, SIZE, j);
    
    return 0;
}
