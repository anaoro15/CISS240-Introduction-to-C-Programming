// Name: aoro
// File: a05q06.cpp
//
// Description:
// This program is a tile–based dungeon–type game.
// The dungeon is made up of a grid of rooms. A player can go from a room
// to an adjoining room. Each room is labeled with a row number and a column
// number.The row numbers are from 0 to 7 and the column numbers are from 0 to  // A player in the dungeon, of course, must stay in the dungeon.
// The player’s position is given by the row and col variable (obviously of
// int type).
// In  addition, there are special rooms which are closed and the person cannot
// enter these rooms (without special spells.)
// This program gets the position (i.e., values for row and col in that order)
// and prints 1 if the position corresponds to a regular room.
// Otherwise (i.e., the room is special or the position is outside the dungeon)
// the program prints 0.

#include <iostream>

int main()
{
    std::cout << "Enter row and column for player position: ";
    int row, col;
    std::cin >> row >> col;

    bool in_closed_room = ((row == 1 && (col >= 2 && col <= 8)) ||
                           (row == 2 && (col >= 2 && col <= 8)) ||
                           (row == 5 && (col >= 4 && col <= 7)) ||
                           (row == 6 && (col >= 4 && col <= 7)));

    bool out_of_bounds = (row < 0 || row > 7 || col < 0 || col > 9);
                        

    // if the player position is in the closed room or out of bounds
    // the statement inside this if function will execute and program prints 0
    
    if (in_closed_room == true || out_of_bounds == true)       
    {
        std::cout << (false) << std::endl;
    }

    // if the condition is false, that means that the player is somewhere in
    // the other regular rooms and program prints 1
    
    if (in_closed_room == false && out_of_bounds == false)    
    {
        std::cout << (true) << std::endl;
    }

    return 0;
}
