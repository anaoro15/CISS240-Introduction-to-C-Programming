//Name: aoro
//File: q0201.cpp

#include <iostream>

int main()
{
    std::cout << "Enter your waist (in inches): w = ";
    int w = 0; 
    std::cin >> w;

    std::cout << "Now, enter your height (in inches): h = ";
    int h = 0;
    std::cin >> h;

    std::cout << "Lastly, enter number of fingers on your hands: f = ";
    int f = 0;
    std::cin >> f;

    int iq;
    iq = 3 * w / h + (3 + f) / 42;

    std::cout << "According to Elbert Ainsteing, your IQ = " << iq << "."
              << std::endl;

    return 0;
}

    
    
