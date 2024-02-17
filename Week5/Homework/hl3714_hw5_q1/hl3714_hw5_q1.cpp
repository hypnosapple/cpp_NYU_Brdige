// hl3714_hw5_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//function for fibonacci sequence
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    std::cout << "Please enter a positive integer: ";
    cin >> n;

    //if the input is negative
    if (n <= 0) {
        cout << "Please enter a positive integer. " << endl;
        return 1;
    }

    cout << fib(n);
    return 0;
}

