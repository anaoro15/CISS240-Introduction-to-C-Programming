// Name: aoro
// File: a06q05.cpp
//
// Description:
// This program prompts the user for eight numbers (doubles) where the
// first four describe one rectangle and the next four describe another.
// Next the program sets a boolean variable to true if the rectangular
// regions represented by the numbers overlap; otherwise it’s set to false.
// Finally the program prints the boolean variable;
// i.e., the output is 1 if the two intervals overlap,
// and 0 if the two intervals do not overlap.

#include <iostream>

int main()
{
    double x1, y1, w1, h1, x2, y2, w2, h2;
    std::cout << "Enter eight coordinates: ";
    std::cin >> x1 >> y1 >> w1 >> h1 >> x2 >> y2 >> w2 >> h2;

    double width1 = x1 + w1;
    double height1 = y1 + h1;
    
    double width2 = x2 + w2;
    double height2 = y2 + h2;
    
    bool overlap = ((width2 >= x1 && x2 <= width1) && (height2 >= y1 && y2 <= height1));

    if (overlap)
    {
        std::cout << true << std::endl;
    }
    else
    {
        std::cout << false << std::endl;
    }

    return 0;
}
