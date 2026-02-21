//Name: aoro
//File: q0202.cpp

#include <iostream>

int main()
{
    std::cout << "How old are you? ";
    int age;
    std::cin >> age;

    std::cout << "You are " << age << " years old now. "
              << "Next year you will be " << age + 1 << '.'
              << std::endl;

    return 0;
}
