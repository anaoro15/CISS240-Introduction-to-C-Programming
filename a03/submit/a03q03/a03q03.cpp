//Name: aoro
//File: a03q03.cpp

#include <iostream>

int main()
{
    std::cout << "Enter a five-digit integer: ";
    int plaintext = 0;
    std::cin >> plaintext;

    int a = plaintext / 10000;
    int b = plaintext % 10000 / 1000;
    int c = plaintext % 1000 / 100;
    int d = plaintext % 100 / 10;
    int e = plaintext % 10;

    int e1 = (e + 1) % 10;
  
    int c1 = plaintext % 100 / 10;
    int d1 = plaintext % 1000 / 100;
    int a1 = plaintext % 10000 / 1000;
    int b1 = plaintext / 10000;

    int cyphertext = a1 * 10000 + b1 * 1000 + c1 * 100 + d1 * 10 + e1;
    
    std::cout << plaintext << ' '
              << cyphertext << std::endl;

    return 0;
}
