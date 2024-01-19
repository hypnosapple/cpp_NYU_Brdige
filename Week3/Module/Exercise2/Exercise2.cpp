// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numPac;
    double totalP;
    double discount;

    cout << "Please enter the number of packages you want to purchse: \n";
    cin >> numPac;

    totalP = 99;

    if (numPac >= 10 && numPac <= 19) {
        discount = 99 * 0.1;
        totalP *= 0.9;
    }
    else if (numPac >= 20 && numPac <= 49) {
        discount = 99 * 0.2;
        totalP *= 0.8;
    }
    else if (numPac >= 50 && numPac <= 99) {
        discount = 99 * 0.3;
        totalP *= 0.7;
    }
    else if (numPac >= 100) {
        discount = 99 * 0.4;
        totalP *= 0.6;
    }
    else {
        discount = 0;
        totalP = 99;
    }

    cout << "The amount of discount you can get is " << discount << "." << " The total amount of the purchase is: " << totalP << endl;
}

