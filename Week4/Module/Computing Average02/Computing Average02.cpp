// -1 Computing Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    bool endLoop;
    int sum, numStudent;
    int currNum;
    double average;

    cout << "Enter the grades separated by a space" << endl;
    cout << "End the sequence by typing -1: " << endl;

    sum = 0;
    numStudent = 0;

    endLoop = false;

    while (endLoop == false) {
        cin >> currNum;
        if (currNum == -1) {
            endLoop = true;
        }
        else {
            sum += currNum;
            numStudent++;
        }
    }

    average = (double)(sum) / (double)(numStudent);

    cout << "The class average is " << average << endl;

    return 0;
}

