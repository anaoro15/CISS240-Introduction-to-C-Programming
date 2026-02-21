// Name: aoro
// File: a11q04.cpp
//
// Description:
// This program is part of the logic in a 1–dimensional version of Reversi

#include <iostream>

void input_array(int a[15], int SIZE)
{
    std::cout << "enter starting board: " << std::endl;
    for (int i = 0; i < SIZE; ++i)
    {
        std::cin >> a[i];
    }
}
void print_array(int a[15], int SIZE)
{
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    return;
}

void valid_move(int a[15], int s)
{
    while (a[s] == 0)
    {
        a[s] = 1;

        for (int i = s + 1; i < 14; ++i)
        {
            std::cout << "in for loop" << '\n';
            if (a[i] == 0)
            {
                std::cout << "in i loop" << '\n';
                break;
            }
            else if (a[i] == 1)
            {
                std::cout << "in j loop" << std::endl;
                for (int j = s + 1; j < i; ++j)
                {
                    a[j] = 1;
                }
                break;
            }
        }
        for (int i = s - 1; i > 0; --i)
        {
            std::cout << "in for loop" << '\n';
            if (a[i] == 0)
            {
                std::cout << "in i loop" << '\n';
                break;
            }
            else if (a[i] == 1)
            {
                std::cout << "in j loop" << std::endl;
                for (int j = s - 1; j > i; --j)
                {
                    a[j] = 1;
                }
                break;
            }
        }
    }
}
int main()
{
    int SIZE = 15;
    int a[SIZE] = {0};
    int s;

    input_array(a, SIZE);
    
    std::cout << "index to put a 1: ";
    std::cin >> s;
    valid_move(a, s); // determines if the move is valid and fills the board with 1's or doesn't if there is a 0
    
    print_array(a, SIZE);
    return 0;
}
