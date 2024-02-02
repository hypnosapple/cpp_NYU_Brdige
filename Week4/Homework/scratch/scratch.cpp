// scratch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int remainder, number, output, currDigit, num2;

    cout << "please enter a number: ";
    cin >> number;

    num2 = number;

    while(num2 >= 0) {
        currDigit = num2 % 10;
        num2 = num2 / 10;
        cout << currDigit;
    }
}

