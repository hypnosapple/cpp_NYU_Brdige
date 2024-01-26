// hl3714_w3_q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int hour, min;
    int length;
    char temp;
    string week;
    double cost;

    cout << "Please enter the time you started the call in 24-hour notation (Ex: 12:20): ";
    cin >> hour >> temp >> min;

    //check if the user enter an invalid time
    if (hour > 23 || min > 59) {
        cout << "You entered an invalid time. Please enter again." << endl;
        return 0;
    }
     
    cout << "Please enter the day of the week you started the call (Ex: Mo,Tu,We,Th,Fr,Sa,Su):  ";
    cin >> week;

    cout << "Please enter the length of the call in minutes: ";
    cin >> length;

    //check the user's cost in different time
    if (week == "Mo" || week == "Tu" || week == "We" || week == "Th" || week == "Fr") {
        if (hour > 7 && hour < 18) {
            cost = length * 0.4;
        }
        else {
            cost = length * 0.25;
        }
    }
    else if (week == "Sa" || week == "Su") {
        cost = length * 0.15;
    }
    else {
        cout << "You entered an invalid input." << endl;
        return 0;
    }

    cout << "The cost of the call is: $ " << cost << endl;

    return 0;
}

