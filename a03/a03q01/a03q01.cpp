//Name: aoro
//File: a03q01.cpp

#include <iostream>

int main()
{
    std::cout << "Enter a four-digit number: ";
    int num;
    std::cin >> num;

    int firstRemainder = num % 9;
    int sumOfDigits = num / 1000 + num % 1000 / 100 + num % 100 / 10 + num % 10;
    int secondRemainder = sumOfDigits % 9;

    std::cout << firstRemainder << ' '
              << sumOfDigits << ' '
              << secondRemainder << ' '
              << std::endl;

    return 0;
}
