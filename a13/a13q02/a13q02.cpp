#include <iostream>

void println(int x[], int len)
{
    std::cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << "]" << std::endl;
}
// Inserts newvalue into container x at position index
void insert(int x[], int & len, int size, int index, int newvalue)
{
    
    if (index >= 0 && index <= len)
    {
        x[index] = newvalue;
    }
    
}
// Removes the value at position index of the container x
void remove(int x[], int & len, int size, int index)
{
    if (x[index] = 
}
int main()
{
    const int SIZE = 5;
    int x[SIZE] = {0};
    int len = 0;
    println(x, len);
    while (1)
    {
        int option = 0;
        std::cout << "option (0-quit, 1-insert, 2-remove): ";
        std::cin >> option;
// Break the while loop if option is 0
// Prompt for index
        if (option == 0)
        {
            break;
        }
        int index;
        std::cout << "index: ";
        std::cin >> index;
        
        switch (option)
        {
            case 1:
                int new_value;
                std::cout << "value: ";
                std::cin >> new_value;
                insert(x, len, SIZE, index, new_value);
// Prompt for new value and call the insert() function.
                break;
            case 2:
// Call the remove() function.
                break;
        }
        std::cout << std::endl;
        println(x, len);
    }
    return 0;
}
