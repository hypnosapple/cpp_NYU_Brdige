// hl3714_hw3_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main()
{
    double RealNumber; 
    int choice; // user's choice
    int RoundedNumber; // the answer
    double decimal; //to check the decimal digits of a real number

    cout << "Please enter a Real number: ";
    cin >> RealNumber;

    cout << "Choose your rounding method: " << endl;
    cout << "1. Floor round " << endl;
    cout << "2. Ceiling round " << endl;
    cout << "3. Round to the nearest whole number " << endl;
    cin >> choice;

    decimal = RealNumber - (int)RealNumber;


    switch (choice) {
    case 1:
        RoundedNumber = (int)RealNumber;
        break;

    case 2:
        RoundedNumber = (int)RealNumber + 1;
        break;

    case 3:
        RoundedNumber = (int)(RealNumber + 0.5);
        break;
    }

    cout << RoundedNumber;
}

