// 24-12HourConvert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int hour24;
    int min24;

    int hour12;
    int min12;

    string period;
    char temp;

    std::cout << "Please enter a time in a 24-hour format: \n";

    std::cin >> hour24 >> temp >> min24;

    min12 = min24;

    if (hour24 >= 0 && hour24 <= 11) {
        period = "a.m.";
        if (hour24 == 0) {
            hour12 = 12;
        }
        else {
            hour12 = hour24;
        }
    }
    else {
        period = "p.m.";
        if (hour24 == 12) {
            hour12 = 12;
        }
        else {
            hour12 = hour24 - 12;
        }
    }

    std::cout << "The time in a 12-hour format is: " << hour12 << ":" << min12 << " " << period << "\n";

}

