// 2019Summer_q12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int currDigit;
    int digit;
    int sum;
    int product;
    int result;
    

    cout << "Please enter a positive integer: ";
    cin >> n;

    sum = 0;
    result = n;
    

    while (n > 0) {
        currDigit = n;
        digit = currDigit % 10;
        n = currDigit / 10;
        product = 1;

        if (digit == 0) {
            sum += 1;
        }
        else {
            while (digit > 0) {
                
                product *= digit;
                digit--;
            }
            
        }
        sum += product;
       

    }

    if (sum == result) {
        cout << result << " is a fractorion" << endl;
    }
    else {
        cout << result << " is not a factorion" << endl;
    }
    return 0;
}

