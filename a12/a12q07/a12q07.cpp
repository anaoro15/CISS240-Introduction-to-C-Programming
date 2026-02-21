// Name: aoro
// File: a12q07.cpp

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

//------------------------------------------------------------------------
// Prompts and returns the number of points entered by the user
//------------------------------------------------------------------------
int getNumPoints()
{
}
//------------------------------------------------------------------------
// randunit() returns a random double from 0.0 to 1.0
//------------------------------------------------------------------------
double randunit()
{
    return int(rand()) / RAND_MAX;
}
//------------------------------------------------------------------------
// pointIsInCircle(x, y) returns true if the point (x,y) is in the quarter
// circle
//------------------------------------------------------------------------
bool pointIsInCircle(double x, double y)
{
    
}
//------------------------------------------------------------------------
// printRunningApproximation(i, inCircle) prints for instance:
//
// 1000000 785219 3.1408760000
//
// (See Test 1)
// if i is 1000000 and inCircle is 78219. The third column is the
// approximation of pi with the number of points generated at this point
// (i.e., i) and the number of points in the quarter circle (i.e.
// inCircle)
//------------------------------------------------------------------------

{
}
//------------------------------------------------------------------------
// printSummary(n, inCircle) prints for instance:
//
// The Pi-minator strikes again ...
// Final approximation of pi: 3.1415482200
// Number of points generated: 1000000000
//
// (See Test 1) if n is 1000000000 and inCircle is 785387055.
//------------------------------------------------------------------------
void printSummary(int n, int inCircle)
{
}
int main()
{
    srand((unsigned int) 0);
    std::cout << std::fixed << std::setprecision(10);
    int n = getNumPoints();
    int inCircle = 0; // Counts the number of random points in
// the quarter circle
    for (int i = 1; i <= n; ++i)
    {
// Generate random point (x,y) in the square
        double x = randunit();
        double y = randunit();
// Increment inCircle if (x,y) is in the quarter circle
        if (pointIsInCircle(x, y))
        {
            ++inCircle;
        }
        printRunningApproximation(i, inCircle);
    }
    printSummary(n, inCircle);
    return 0;
}
