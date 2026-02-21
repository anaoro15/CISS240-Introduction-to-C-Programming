// Name: aoro
// File: a08q04.cpp
//
// Description:
// This program accepts an integer value n from the user and then poses n
// multiplication problems to the the user.
// Each question involves the product of two random numbers between 0 and 9.
// If the user answers correctly, he/she gets a point. After asking n
// questions, the program prints the score

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand((unsigned int) 0);
    
    std::cout << "Enter int n (number of multiplications): ";
    int n;
    std::cin >> n;

    int score = 0;
    
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 10;
        int y = rand() % 10;

        int product = x * y;
        
        std::cout << x << " * " << y << " = ";
        int input;
        std::cin >> input;
        if (input == product)
        {
            score += 1;
        }
    }
    std::cout << "Score is: " << score << std::endl;
            
    return 0;
}
