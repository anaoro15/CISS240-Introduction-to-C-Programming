// Name: aoro
// File: a06q06.cpp
//
// Description:
// This program that shows the work for adding two 2–digit numbers using column
// addition.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter two integers: " << std::endl;
    int a, b;
    std::cin >> a >> b;

    int first_digit1 = a / 10;
    int second_digit1 = a % 10;

    int first_digit2 = b / 10;
    int second_digit2 = b % 10;

    int sum2 = first_digit1 + first_digit2;
    int sum1 = second_digit1 + second_digit2;
    int sum3 = 0;
    
    if (sum1 > 9 && sum2 > 9)
    {
        std::cout << "fist if else when both aye biggey then 10\n";
        sum3 = sum3 + (sum2 + sum1 / 10) / 10;
        sum2 = (sum2 + sum1 / 10) % 10;
        sum1 = sum1 % 10;
            std::cout << "  " << first_digit1 << " " << second_digit1 << '\n'
              << "+ " << first_digit2 << " " << second_digit2 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << sum3 << " " << sum2 << " " << sum1 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << std::endl;
       
    }
    else if (sum1 > 9)
                
    {
        std::cout << "second if else when fiyst one biggey then 10\n";
        sum2 = (sum2 + sum1 / 10) % 10;
        sum1 = sum1 % 10;
        
        std::cout << "  " << first_digit1 << " " << second_digit1 << '\n'
              << "+ " << first_digit2 << " " << second_digit2 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << "  " << sum2 << " " << sum1 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << std::endl;
    }
    else if (sum2 > 9)
    {
        std::cout << "thiyd if else when second one is biggey then 10\n";
        sum3 = sum2 / 10;
        sum2 = sum2 % 10;
         
        std::cout << "  " << first_digit1 << " " << second_digit1 << '\n'
              << "+ " << first_digit2 << " " << second_digit2 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << sum3 << " " << sum2 << " " << sum1 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << std::endl;
    }
    else
    {
         std::cout << "  " << first_digit1 << " " << second_digit1 << '\n'
              << "+ " << first_digit2 << " " << second_digit2 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << "  " << sum2 << " " << sum1 << '\n'
              << std::setw(6) << std::setfill('-') << '\n'
              << std::endl;
    }

    return 0;
}
