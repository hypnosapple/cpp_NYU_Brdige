// hl3714_hw5_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay) {
    // print the head line
    cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;

    // print leading spaces
    for (int i = 1; i < startingDay; ++i) {
        cout << "\t";
    }

    // print the days 
    int day = 1;
    for (int i = startingDay; i <= 7; ++i) {
        cout << day << "\t";
        day++;
    }
    cout << endl;

    // continue printing the rest of the days of the month
    while (day <= numOfDays) {
        for (int i = 1; i <= 7 && day <= numOfDays; ++i) {
            cout << day << "\t";
            day++;
        }
        cout << endl;
    }

    // return the last day
    return (numOfDays - day + 1) % 7 + 1;
}

//determine if it is a leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int numDay;
    int startDay;

    int year;
    cout << "Enter the number of days in the month: ";
    cin >> numDay;
    cout << "Enter the starting day (1 for Mon, 2 for Tue, ..., 7 for Sun): ";
    cin >> startDay;

    cout << endl;

    cout << "Monthly Calendar:" << endl;
    printMonthCalendar(numDay, startDay);

    cout << endl;

    cout << "Enter a year: ";
    cin >> year;

    //print output 
    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }


    return 0;
}