// 2019Summner_q11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int row;
    int column;

    cout << "Please enter a positive integer: " << endl;
    cin >> n;

    for (row = 1; row <= n; row++) {
        for (column = 1; column <= 2 * n - 1; column++) {
            if (row == 1) {
                cout << "*";
            } 
            else if (row == column || row + column == 2*n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

