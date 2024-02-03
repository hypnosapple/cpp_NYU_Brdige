// 2023summer_q14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n; //for user
    int perfectSquareCount;
    int perfectNumberCount;
    bool endloop; 
    int d; // divisor
    int s; // sum of all the divisors

    cout << "Please enter a sequence of numbers, each one in a separate line, and type -1 to indicate the end of the input. " << endl;
    
    endloop = false;
    perfectSquareCount = 0;
    perfectNumberCount = 0;

    while (endloop == false) {
        cin >> n;

        if (n == -1) {
            endloop = true;
        }

        //check if it is the perfect square
        if (n == ((int)sqrt(n) * (int)sqrt(n))) {
            perfectSquareCount++;
        } 

        s = 0;

        //check the sum of the number's all divisors
        for (d = 1; d < n; d++) {
            
            if (n % d == 0) {
                s += d; 
            }
        } 

        //check if it is a perfect number
        if (n == s) {
            perfectNumberCount++;
        }

    }

    cout << "Total count of Perfect Squares in the given sequence: " << perfectSquareCount << endl;
    cout << "Total count of Perfect Numbers in the given sequence: " << perfectNumberCount << endl;
}

