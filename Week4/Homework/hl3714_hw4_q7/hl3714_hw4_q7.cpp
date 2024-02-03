// hl3714_hw4_q7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n; // n for number
    int c, r; // c for column r for row
    int l; // l for line number

    cout << "Please enter a positive integer: ";
    cin >> n;

    //check if n is positive
    if (n < 1) {
        cout << "Please enter a valid input.";
        return 0;
    }

    //initialize row
    r = 1;


    //print the table
    for (l = 1; l <= n; l++) {
       
        //print first row 
        if (r == 1) {
            for (c = 1; c <= n; c++) {
                cout << c ;
                //check the space number 
                if (c < 10) {
                    cout << "      ";
                }
                else if (c > 9 && c < 100) {
                    cout << "     ";
                }
                else if (c > 99 && c < 1000) {
                    cout << "    ";
                }
            }
        }
        else {
            //print the first number first
            cout << r ;

            //print space based on the digit of r
            if (r < 10) {
                cout << "      ";
            } else if (r > 9 && r < 100) {
                cout << "     ";
            }
            else if (r > 99 && r < 1000) {
                cout << "    ";
            }

            // print each the rest of the number for each row
            for (c = 2; c <= n; c++) {
                cout << c * r ;

                if (c * r < 10) {
                    cout << "      ";
                }
                else if ((c * r) > 9 && (c * r) < 100) {
                    cout << "     ";
                }
                else if ((c * r) > 99 && (c * r) < 1000) {
                    cout << "    ";
                }
            }
        }

        //update row
        r += 1;
        //new row
        cout << endl;
    }

}

