// hl3714_hw4_q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n; // n for number
    int c, r; // c for column r for row
    int l; // l for line number

    cout << "Please enter a positive integer: ";
    cin >> n;

    //check if n is positive
    if (n < 1) {
        cout << "Please enter a valid input.";
        return 0;
    }

    //initialize row
    r = 1;

    //print the table
    for (l = 1; l <= n; l++) {

        //initialize column
        c = 1;
       
        //print first row 
        if (r == 1) {

        }

        //update row
        r += 1;
    }

}

