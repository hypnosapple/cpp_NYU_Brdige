// 2023winter_q13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sp, st;
    int l;
    int c;

    cout << "Please enter a positive integer: ";
    cin >> n;

    c = ((2 * n) - 1);
    for (l = 1; l <= (2 * n); l++) {

        //print space
        for (sp = c; sp > 0; sp--) {
            cout << " ";
        }

        //print star
        for (st = 1; st <= l; st++) {
            cout << "*";
        }

        c--;
        cout << endl;
    }

}

