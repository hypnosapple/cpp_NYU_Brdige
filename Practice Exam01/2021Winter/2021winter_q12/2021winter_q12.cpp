// 2021winter_q12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int foot = 12;
const int yard = 36;

int main()
{
    int n;
    int s; // sum
    int d;
    bool endloop;
    int f, y, i;

    endloop = false;
    d = 1;
    s = 0;

    //calculate the sum of the distance
    while (endloop == false) {
        cout << "Enter the number of inches the snail traveled in the day #" << d << endl;
        cout << "or type -1 if they reached their destination: " << endl;
        cin >> n;

        if (n == -1) {
            endloop = true;
        }
        else {
            s += n;
            //update day count
            d++;
        }
    }

    //convert the distance 
    y = s / 36;
    s = s % 36;
    f = s / 12;
    i = s % 12;

    cout << "In " << d << "days, the snail traveled " << y << " yards, " << f << " feet and " << i << " inches." << endl;

}

