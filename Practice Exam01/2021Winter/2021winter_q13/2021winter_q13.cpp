// 2021winter_q13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char n;
    int l;
    int letterCount;
    int space; 
    char c; // for space count

    cout << "Please enter a lower-case letter: " << endl;
    cin >> n;     

    c = n;

    for (l = 1; l <= ((int)n - 96); l++) {

        //print the space 
        for (space = 1; space <= ((int)c - 97); space++) {
            cout << " ";
        }

        //check if even and odd
        if (l % 2 == 1) {
            for (letterCount = 1; letterCount <= 1 + (l - 1) * 2; letterCount++) { 
                cout << (char)(l + 96);
            }
        }
        else if (l % 2 == 0) {
            for (letterCount = 1; letterCount <= 1 + (l - 1) * 2; letterCount++) {
                cout << (char)(l + 64);
            }
        }


        c--;
        cout << endl;
    }
    
}

