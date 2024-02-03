// 2023summer_q13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int n;
    int line, lineb;
    int starCount, spaceCount;
    int starCountb, spaceCountb;
    int c,d; // for counting space for the first loop

    std::cout << "Please enter a positive integer: ";
    cin >> n; 
    
    c = n;

    //print the first n+1 line
    for (line = 1; line <= n + 1; line++) {
        
        //print space
        for (spaceCount = c; spaceCount > 0; spaceCount--) {
            cout << " ";
        }

        //print star
        for (starCount = 1; starCount <= (1 + (line - 1) * 2); starCount++) {
            cout << "*";
        }

        //update c
        c--;
        cout << endl;
    }
 
    d = 1;
    //print the second part (lineb=n)
    for (lineb = n; lineb > 0; lineb--) {

        //print space
        for (spaceCountb = 1; spaceCountb <= d; spaceCountb++) {
            cout << " ";
        }

        //print star
        for (starCountb = 1; starCountb <= ((lineb - 1) * 2 + 1); starCountb++) {
            cout << "*";
        }

        //update d
        d++;
        cout << endl;
    }
    
}

