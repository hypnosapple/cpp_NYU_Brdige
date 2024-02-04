// 2023winter_q14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int one, two, three, four; // for group 1234
    int n;
    int s; // sum of digits
    int d; // current digit
    int c; // current number
    bool endloop;


    cout << "Please enter a sequence of numbers, each one in a separate line, and type -1 to indicate the end of the input." << endl;

    endloop = false;

    one = 0;
    two = 0;
    three = 0;
    four = 0;

    while (endloop == false) {
        cin >> n;

        //check if n = -1
        if (n == -1) {
            endloop = true;
        }

        c = n;
        s = 0;

        //calculate the sum of the all digits in n
        while (c > 0) {
            d = c % 10;
            s += d;
            c = c / 10;
        }

        if (s > 0 && s < 10) {
            one++;
        }
        else if (s >= 10 && s < 20) {
            two++;
        }
        else if (s >= 20 && s < 30) {
            three++;
        }
        else if (s >= 30){
            four++;
        }
    }

    cout << "Total count of numbers in the Numbers Group 1: " << one << endl;
    cout << "Total count of numbers in the Numbers Group 2: " << two << endl;
    cout << "Total count of numbers in the Numbers Group 3: " << three << endl;
    cout << "Total count of numbers in the Numbers Group 4: " << four << endl;
}

