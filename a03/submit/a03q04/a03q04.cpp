//Name: aoro
//File: a03q04.cpp

#include <iostream>

int main()
{
    std::cout << "Enter two 6 digit integers representing time in the day: ";
    int time1, time2; //original numbers from the input
    std::cin >> time1 >> time2;

    int hourDigits1 = time1 / 10000; //getting first two digits
    int minuteDigits1 = time1 % 10000 / 100; //getting second two digits
    int secDigits1 = time1 % 100; //getting last two digits

    int hours1 = hourDigits1 * 3600; //converting hours to sec
    int minutes1 = minuteDigits1 * 60; //converting minutes to sec
    
    int hourDigits2 = time2 / 10000; //same process for time2 number
    int minuteDigits2 = time2 % 10000 / 100;
    int secDigits2 = time2 % 100;

    int hours2 = hourDigits2 * 3600;
    int minutes2 = minuteDigits2 * 60;

    int time1InSecs = hours1 + minutes1 + secDigits1; //converting original number time1 to number of sec
    
    int time2InSecs = hours2 + minutes2 + secDigits2; //converting original number time2 to number of sec

    int newTime = time2InSecs - time1InSecs; //the difference between time1 and time2

    int newHours = newTime / 3600; 
    int newMinutes = newTime % 3600 / 60;
    int newSecs = newTime % 3600 % 60;
    //converting the difference back to hour:min:sec ratio
    
    int newFirstDig = newHours / 10 % 10;
    int newSecDig = newHours % 10;
    int newThirdDig = newMinutes / 10 % 10;
    int newFourthDig = newMinutes % 10;
    int newFifthDig = newSecs / 10 % 10;
    int newSixthDig = newSecs % 10;
    //getting the final output in this format 00 : 00 : 00
    
    std::cout << newFirstDig << newSecDig << " : "
              << newThirdDig << newFourthDig << " : "
              << newFifthDig << newSixthDig 
              << std::endl;

    return 0;
}
