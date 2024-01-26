// hl3714_hw3_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string name;
    int gYear;
    int cYear;
    int schoolYear;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your graduation year: ";
    cin >> gYear;

    cout << "Please enter current year: ";
    cin >> cYear;

    schoolYear = gYear - cYear;
    //calculate the difference between graduation year and current year. 

    //print out the user's status
    if (schoolYear <= 0) {
        cout << name << ", you graduated" << endl;
    }
    else if (schoolYear == 1) {
        cout << name << ", you are a senior" << endl;
    }
    else if (schoolYear == 2) {
        cout << name << ", you are a junior" << endl;
    }
    else if (schoolYear == 3) {
        cout << name << ", you are a sophomore" << endl;
    }
    else if (schoolYear == 4) {
        cout << name << ", you are a freshman" << endl;
    }
    else {
        cout << name << ", you are not in college yet" << endl;
    }

}

