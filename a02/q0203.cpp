//Name: aoro
//File: q0203.cpp

#include <iostream>

int main()
{
    int x, y, z, i, t;

    std::cout << "Enter the x amount of air, y amount of water, z number of worms, i amount of wood boiling at t temperature: ";
    std::cin >> x >> y >> z >> i >> t;

    int amount_of_gold;
    amount_of_gold = x + (y / (z + i)) / (t * t * t);

    std::cout << "According to Al Chemiz the amount of gold you can produce is " << amount_of_gold
              <<'.' <<std::endl;

    return 0;
}
