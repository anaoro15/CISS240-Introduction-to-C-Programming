#include <iostream>


void println(int x[], int xSize)
{
    for (int i = 0; i < xSize; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
}
//------------------------------------------------------------------------
// Swap the values of x[i] and x[j]
// For instance if the array arr has values 9, 8, 7, 6, then on return
// from calling swap(arr, 1, 3), arr will have values 9, 6, 7, 8.
//------------------------------------------------------------------------
void swap(int x[], int i, int j)
{
    j = i + 1;
    if (x[i] > x[j])
    {
        int t = x[i];
        x[i] = x[j];
        x[j] = t;
    }
}
//------------------------------------------------------------------------
// Performs bubble sort algorithm on x[0], ..., x[xSize 1] (in
// ascending order)
//------------------------------------------------------------------------
void bubbleSort(int x[], int xSize)
{
    for (int j = xSize - 2; j >= 0; --j)
    {
        for (int i = 0; i <= j; ++i)
        {
            swap(x, i, j);
        }
    }
}
//------------------------------------------------------------------------
// Returns index where target appears in array x. If target is not found,
// -1 is returned.
//------------------------------------------------------------------------
int binarySearch(int x[], int xSize, int target)
{
    int index = -1;
    int mid = 0;
    int lower = 0;
    int upper = xSize -1;
    
    while (lower <= upper)
    {
        mid = (upper + lower) / 2;
        if (x[mid] == target)
        {
            index = mid;
            return index;
        }
        else if (x[mid] > target)
        {
            upper = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    }
    return index;
}

int main()
{
//--------------------------------------------------------------------
// Declare and prompt user for values to be stored in array x
//--------------------------------------------------------------------
    const int SIZE = 8;
    int x[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> x[i];
    }
//--------------------------------------------------------------------
// Sort and print array x
//--------------------------------------------------------------------
    bubbleSort(x, SIZE);
    println(x, SIZE);
//--------------------------------------------------------------------
// Prompt for target to search in array. The index of target in the
// array is displayed. If target is not found, -1 is printed.
//--------------------------------------------------------------------
    int target = 0;
    std::cout << "target: ";
    std::cin >> target;
    std::cout << binarySearch(x, SIZE, target)
              << std::endl;
return 0;
}
