// hl3714_hw5_q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double eApprox(int n) {
    double e; 
    double factorial;

    //initialize
    factorial = 1.0;
    e = 1.0;

    // Calculate the sum of the first n+1
    for (int i = 1; i <= n; ++i) {
        factorial *= i; 
        e += 1.0 / factorial; 
    }

    return e;
}

int main() {

    cout.precision(30);

    //print the output
    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' << " e = " << eApprox(n) << endl;
    }

    return 0;
}