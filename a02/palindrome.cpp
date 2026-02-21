// practice for old problems
// palindrome problem

#include <iostream>

bool is_palidrome(char input[], int length)
{
    bool isPalindrome = true;
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        if (input[start] == input[end])
        {
            std::cout << "comparing letters: " << input[start] << " and " << input[end] << '\n';
        
            ++start;
            --end;
        }
        else return false;
    }
    return isPalindrome;
}

int length(char input[])
{
    int i = 0;
    int numLetters = 0;
    while (input[i] != '\0')
    {
        ++numLetters;
        ++i;
    }
    std::cout << "test length is: " << numLetters << '\n';
    return numLetters;
}
int main()
{
    char input[1000];
    std::cout << "Enter a word to check if it's a palindrome: " << std::endl;
    std::cin >> input;
    int numLetters = length(input);
    bool check = is_palidrome(input, numLetters);
    if (check)
    {
        std::cout << "This is a palindrome!" << '\n';
    }
    else
    {
        std::cout << "This is NOT a palidrome!" << '\n';
    }
    
    return 0;
}
