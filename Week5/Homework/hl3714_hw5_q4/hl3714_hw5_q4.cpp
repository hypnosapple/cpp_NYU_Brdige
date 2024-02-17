// hl3714_hw5_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//implement function a 
void printDivisors(int num) {

    // Print divisors 
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Please enter a positive integer >=2: ";
    cin >> num;

    //check user's input
    if (num < 2) {
        cout << "Invalid input. Please enter a positive integer >= 2." << endl;
        return 1;
    }

    printDivisors(num);

    return 0;
}
