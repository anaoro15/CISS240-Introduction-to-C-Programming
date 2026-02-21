// practice for old problems


#include <iostream>

bool is_palidrome(char input[], int length)
{
    bool isPalindrome = true;
    for (int i = 0; i < length; ++i)
    {
        for (int j = length; j >= i; --j)
        {
            if (char[i] != char[j]) return false;
        }
    }
    return isPallindrome;
}

int length(char input[])
{
    int i = 0;
    int numLetters = 0;
    while (input[i] != '\O')
    {
        ++numLetters;
        ++i;
    }
    return numLetters;
}
int main()
{
    
    
    return 0;
}
