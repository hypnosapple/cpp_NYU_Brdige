// hl3714_hw4_q6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int evenCount;
    int oddCount;
    int result;
    int digitCount;

    //enter an input
    cout << "Please input a positive integer: ";
    cin >> n;
    
    //check if n = 1 or 2 or negative
    if (n == 1) {
        cout << "There is no even integer between 1 and 1.";
        return 0;
    }
    else if (n == 2) {
        cout << "There is no even integer between 1 and 2.";
        return 0;
    }
    else if (n < 1) {
        cout << "Please enter a valid input.";
        return 0;
    }

    //initialize
    result = 2;

    while (result < n) {
        //initialize even and odd count (also refresh)
        evenCount = 0;
        oddCount = 0;

        //update digitCount value
        digitCount = result;

        //count even and odd for every digit
        while (digitCount > 0) {
            if (((digitCount % 10) % 2) == 0) {
                evenCount++;
            }
            else {
                oddCount++;
            }
            //update digit count
            digitCount = digitCount / 10;
        }

        if (evenCount > oddCount) {
            cout << result << endl;
        }

     //update result
     result += 2;
    }
}

