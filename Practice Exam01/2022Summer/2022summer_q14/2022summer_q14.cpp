// 2022summer_q14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int d; // digit
    int dc; // digit count
    int odd;
    int even;
    bool endloop;
    int three, four, five, six, seven; //for different group
    int moreOdd;
    int equal;
    int cd; //current digit

    std::cout << "Please enter a sequence of positive numbers (with at least 3-digits and at most 7-digits), each one in a separate line. End your sequence by typing -1. " << endl;

    endloop = false; 
    three = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    moreOdd = 0;
    equal = 0;
    
    while (endloop == false) {
        cin >> n;

        even = 0;
        odd = 0;
        d = n;
        dc = 0;

        //if the user enter -1
        if (n == -1) {
            endloop = true;
        } 
        else {
            //check each digit for the number
            while (d > 0) {
                cd = d % 10; // unit digit 

                //check the digit is even or odd
                if (cd % 2 == 0) {
                    even++;
                }
                else {
                    odd++;
                }

                //update the number
                d = d / 10;

                dc++;
            }

            //check numbers group
            switch (dc) {
            case 3:
                three++;
                break;
            case 4:
                four++;
                break;
            case 5:
                five++;
                break;
            case 6:
                six++;
                break;
            case 7:
                seven++;
                break;
            }

            //check odd and even
            if (odd > even) {
                moreOdd++;
            }
            else if (odd == even) {
                equal++;
            }
        }

    }

    cout << "Total count of numbers in the 3-digits Numbers group: " << three << endl;
    cout << "Total count of numbers in the 4-digits Numbers group: " << four << endl;
    cout << "Total count of numbers in the 5-digits Numbers group: " << five << endl;
    cout << "Total count of numbers in the 6-digits Numbers group: " << six << endl;
    cout << "Total count of numbers in the 7-digits Numbers group: " << seven << endl;
    cout << "Total count of numbers in the More Odd-digits group: " << moreOdd << endl;
    cout << "Total count of numbers in the Equal-digits group: " << equal << endl;
}

