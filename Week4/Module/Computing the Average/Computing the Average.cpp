// Computing the Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int numStudent;
    int count;
    int curr, sum;
    double average;

    cout << "Please enter the number of students in the class: " << endl;
    cin >> numStudent;

    cout << "Enter the students' grades (separate by a space)" << endl;
    
    sum = 0; 

    for (count = 1; count <= numStudent ; count ++) {
        cin >> curr;
        sum += curr;
    }

    average = (double)(sum / numStudent); 
    cout << "The average is " << average << endl;

    return 0;
}

