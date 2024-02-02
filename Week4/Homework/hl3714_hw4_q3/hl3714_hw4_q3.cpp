// hl3714_hw4_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int decimal, remainder;
    int result = 0, position = 1; 
    //position is the unit digit for now

    cout << "Enter decimal number: ";
    cin >> decimal;

    while (decimal > 0){

        remainder = decimal % 2;
        // its either 0 or 1
        decimal = decimal / 2;
        //update decimal

        result += (position * remainder);
        position *= 10;
    }

    cout << result << endl;

    return 0;
}
