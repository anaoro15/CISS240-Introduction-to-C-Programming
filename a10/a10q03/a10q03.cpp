// Name: aoro
// File: a10q03.cpp
//
// Description:
// This program is a simple text-based "game" where you control your avatar
// in a 2D world with x coordinates between 0 and 4 (inclusive)
// and y coordinates between 0 and 4 (inclusive).
// Your initial position is x = 0, y = 0.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "seed: ";
    int n = 0;
    std::cin >> n;
    srand(n);

    int x = 0;
    int y = 0;
    int num_moves = 0;
    std::cout << "Gold hunting game!!!" << std::endl;

    int gold_x = rand() % 5;
    int gold_y = rand() % 5;

    while (gold_x == 0 && gold_y == 0)
    {
        gold_x = rand() % 5;
        gold_y = rand() % 5;
    }

    std::cout << '\n' << "position of pot: x=" << gold_x << ", y=" << gold_y << '\n';
    std::cout << "your position: x=" << x << ", y=" << y << '\n';
    std::cout << "0-north, 1-south, 2-east, 3-west, 99-quit: ";
    int input;
    std::cin >> input;

    while (input != 99)
    {
        switch (input)
        {
            case 0:
                if (y + 1 <= 4) ++y;
                ++num_moves;
                break;
            case 1:
                if (y - 1 >= 0) --y;
                ++num_moves;
                break;
            case 2:
                if (x + 1 <= 4) ++x;
                ++num_moves;
                break;
            case 3:
                if (x - 1 >= 0) --x;
                ++num_moves;
                break;
        }

        if (x == gold_x && y == gold_y)
        {
            std::cout << '\n' << "you got the gold!";
            break;
        }
        
        std::cout << '\n' << "position of pot: x=" << gold_x << ", y=" << gold_y << '\n';
        std::cout << "your position: x=" << x << ", y=" << y << '\n';
        std::cout << "0-north, 1-south, 2-east, 3-west, 99-quit: ";
        std::cin >> input;
    }
    std::cout << '\n' << "number of moves: " << num_moves << std::endl;
        
        
    return 0;
}
