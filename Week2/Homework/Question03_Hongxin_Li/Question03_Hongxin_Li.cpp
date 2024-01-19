// Question03_Hongxin_Li.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int hour = 24;
const int min = 6;

int main()
{
    int dayJ, hourJ, minJ;
    int dayB, hourB, minB;
    int dayT, hourT, minT;


    cout << "Please enter the number of days John has worked: ";
    cin >> dayJ;
    cout << "Please enter the number of hours John has worked: ";
    cin >> hourJ;
    cout << "Please enter the number of minutes John has worked: ";
    cin >> minJ;
    cout << endl << endl;
    
    cout << "Please enter the number of days Bill has worked: ";
    cin >> dayB;
    cout << "Please enter the number of hours Bill has worked: ";
    cin >> hourB;
    cout << "Please enter the number of minutes Bill has worked: ";
    cin >> minB;
    cout << endl << endl;

    dayT = dayJ + dayB;
    hourT = hourJ + hourB;
    minT = minJ + minB;

    hourT += minT / 60;
    minT %= 60;
    dayT += hourT / 24;
    hourT %= 24;



    cout << "The total time both of them worked together is : " << dayT << " days, " << hourT << " hours and " << minT << " minutes." << endl;
}

