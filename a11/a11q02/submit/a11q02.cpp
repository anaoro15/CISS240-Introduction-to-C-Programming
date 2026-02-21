// Name: aoro
// File: a11q02.cpp
//
// Description:
// This program prompts the user for 10 doubles and a window size, places the doubles
// in an array, and computes the moving average with the window size specified by the user;
// the window size refers to the number of terms to use in the computation of the average.
// The program outputs the moving averages with consecutive values separated by a
// space. It displays 4 decimal places in the output.

#include <iostream>
#include <iomanip>

void array_input(double x[10], int n, double input)
{

    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;
        x[i] = input;
    }
}

void moving_average(double x[10],double average[10], int window_size)
{

    for (int i = 0; i < window_size - 1; ++i)
    {
        average[i] = x[i];
    }
    
    for (int j = window_size - 1; j < 10; ++j)
    {
        double s = 0.0;
        
        for (int k = j; k > j - window_size; --k)
        {
            s += x[k];
        }
        
        average[j] = s / window_size;
    }
    
        
}
void print_average(double average[10], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << std::setprecision(4)  << std::fixed  << average[i] << ' ';
    }
    std::cout << '\n';
}
int main()
{
    double x[10];
    int n = 10;
    double input;

    std::cout << "Enter 10 array values: ";
    array_input(x, n, input);

    int window_size;
    double average[10];
    std::cout << "Enter window size: ";
    std::cin >> window_size;

    moving_average(x, average, window_size);
    print_average(average, n);
    
    return 0;
}
