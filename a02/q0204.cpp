//Name: aoro
//File: q0204.cpp

#include <iostream>

int main()
{
    std::cout << "Enter a five-digit number: ";
    int num;
    std::cin >> num;

    int firstDigit = num / 10000;
    int secondDigit = num % 10000 / 1000;
        int thirdDigit = num % 1000 / 100;
    int fourthDigit = num % 100 / 10;
    int fifthDigit = num % 10;

    std::cout << firstDigit << ' '
              << secondDigit << ' '
              << thirdDigit << ' '
              << fourthDigit << ' '
              << fifthDigit << ' '
              << std::endl;
    
    return 0;
}
