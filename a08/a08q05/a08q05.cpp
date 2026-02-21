// Name: aoro
// File: a08q05.cpp
//
// Desciption:
// This program that prints all 3–by–3 magic squares.
// (The program does not accept any input.)

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    for (int n = 123456789; n <= 987654321; ++n)
    {
        int a = n % 10, b = n / 10 % 10, c = n / 100 % 10,
            d = n / 1000 % 10, e = n / 10000 % 10, f = n / 100000 % 10,
            g = n / 1000000 % 10, h = n / 10000000 % 10, i = n / 100000000;

        int row1 = a + b + c;
        int row2 = d + e + f;
        int row3 = g + h + i;
        int col1 = a + d + g;
        int col2 = b + e + h;
        int col3 = c + f + i;
        int diag1= a + e + i;
        int diag2= g + e + c;

        bool dif = (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i
                    && b != c && b != d && b != e && b != f && b != g && b != h && b != i
                    && c != d && c != e && c != f && c != g && c != h && c != i
                    && d != e && d != f && d != g && d != h && d != i
                    && e != f && e != g && e != h && e != i
                    && f != g && f != h && f != i
                    && g != h && g != i
                    && h != i);
            if (dif)
            {
                if (row1 == 15 && row2 == 15 && row3 == 15 && col1 == 15 && col2 == 15 && col3 == 15
                    && diag1 == 15 && diag2 == 15)
                {
                    std::cout << "+-+-+-+\n"
                              << '|' << a << '|' << b << '|' << c << "|\n"
                              << "+-+-+-+\n"
                              << '|' << d << '|' << e << '|' << f << "|\n"
                              << "+-+-+-+\n"
                              << '|' << g << '|' << h << '|' << i << "|\n"
                              << "+-+-+-+" << std::endl;
                }
            }
    }
    return 0;
}
