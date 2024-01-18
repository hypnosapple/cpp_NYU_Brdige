// Practice_Exercise01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int pocNum;

    cout << "Please enter a number from 0-36: \n";
    cin >> pocNum;

    if (pocNum == 0) {
        cout << "The pocket color is green. \n";
    }
    else if (pocNum >= 1 && pocNum <= 10) {
        if (pocNum % 2 == 0) {
            cout << "The pocket color is black. \n";
        }
        else {
            cout << "The pocket color is red. \n";
        }
    }
    else if (pocNum >= 11 && pocNum <= 18) {
        if (pocNum % 2 == 0) {
            cout << "The pocket color is red. \n";
        }
        else {
            cout << "The pocket color is black. \n";
        }
    }
    else if (pocNum >= 19 && pocNum <= 28) {
        if (pocNum % 2 == 0) {
            cout << "The pocket color is black. \n";
        }
        else {
            cout << "The pocket color is red. \n";
        }
    }
    else if (pocNum >= 29 && pocNum <= 36) {
        if (pocNum % 2 == 0) {
            cout << "The pocket color is red. \n";
        }
        else {
            cout << "The pocket color is black. \n";
        }
    }
    else {
        cout << "Error Message. \n";
    }
}

