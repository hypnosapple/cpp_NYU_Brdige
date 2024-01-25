// Question04_Hongxin_Li.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    

    cout << "Please enter two positive intgers, separated by a space: " << endl;
    cin >> num1 >> num2;

    cout << num1 << '+' << num2 << " = " << num1 + num2 << endl;
    cout << num1 << '-' << num2 << " = " << num1 - num2 << endl;
    cout << num1 << '*' << num2 << " = " << num1 * num2 << endl;
    cout << num1 << '/' << num2 << " = " << (double)num1 / (double)num2 << endl;
    cout << num1 << " div " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " mod " << num2 << " = " << num1 % num2 << endl;
 
}

