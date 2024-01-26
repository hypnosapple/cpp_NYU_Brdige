// hl3714_hw3_q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    double c;

    double qPlus; // for quadratic equation plus
    double qMinus; //for quadratic equation minus

    double solutionCheck; // for checking real solutions

    cout << "Please enter value of a: ";
    cin >> a;

    cout << "Please enter value of b: ";
    cin >> b;

    cout << "Please enter value of c: ";
    cin >> c;

    qPlus = (-b + sqrt(b * b - 4 * a * c)) / (2*a);
    qMinus = (-b - sqrt(b * b - 4 * a * c)) / (2*a);
    //two ways of quadratic equations

    solutionCheck = (b * b) - (4 * a * c);
    //calculate the solutioncheck for later use

    //print out the case if a or b or c is zero
    if (a == 0 && b == 0 && c == 0) {
        cout << "This equation has an infinite number of solutions." << endl;
    }
    else if (a == 0 && b == 0) {
        cout << "This equation has no solution." << endl;
    } 
    else if ( a == 0){
        cout << "This equation is no longer quadratic equation, however, x = " << -(c/b) << endl;
    } 
    else {
        if (solutionCheck < 0) {
            cout << "This equation has no real solution." << endl;
        }
        else if (solutionCheck == 0) {
            cout << "This equation has a single real solution x= " << qPlus << endl;
        }
        else {
            cout << "This equation has two real solutions x1= " << qPlus << ", x2= " << qMinus << endl;
        } 
        // else use quadratic equations to solve ( a cannot be 0)
    }

    return 0;

}

