// hl3714_hw4_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char M, D, C, L, X, V, I;
    int decimal;
    int counter;

    cout << "Enter decimal number: ";
    cin >> decimal;
    
    //print M first
    if ((decimal / 1000) > 0) {
            for (counter = decimal / 1000; counter > 0; counter--) {
                cout << 'M';
            }
            //reset decimal
            decimal -= (decimal / 1000) * 1000;
        }

    //print D (at most 1)
    if ((decimal / 500) > 0) {
        cout << 'D';
        //reset decimal
        decimal -= 500;
    }

    //print C (at most 4)
    for (counter = 0; counter < 5; counter++) {
            if ((decimal / 100) > 0) {
            decimal -= 100;
            cout << 'C';
        }
    }

    //print L (at most 1)
    if ((decimal / 50) > 0) {
        cout << 'L';
        //reset decimal
        decimal -= 50;
    }

    //print X (at most 4)
    for (counter = 0; counter < 5; counter++) {
        if ((decimal / 10) > 0) {
            decimal -= 10;
            cout << 'X';
        }
    }

    //print V (at most 1)
    if ((decimal / 5) > 0) {
        cout << 'V';
        //reset decimal
        decimal -= 5;
    }

    //print I (at most 4)
    counter = decimal;
    while (counter > 0) {
        cout << 'I';
        counter--;
    }
       
    return 0;
}

