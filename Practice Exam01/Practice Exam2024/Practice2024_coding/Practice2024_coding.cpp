// Practice2024_coding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int l, lb;
    int lettera, letterb;
    int spacea, spaceb;
    int c;
    int d; //for second part space b
    int e; //for second part letter

    cout << "Please enter a positive number: " << endl;
    cin >> n;

    c = n;

    //print first half
    for (l = 1; l <= n; l++) {

            //print space 1
            for (spacea = c - 1; spacea > 0; spacea--) {
                cout << " ";
            }

            //print letter1
            cout << (char)(l + 96);
            
            //print space 2
            if (l > 1) {
                for (spaceb = 1; spaceb <= (2 * l - 3); spaceb++) {
                    cout << " ";
                }

                //print letter2
                cout << (char)(l + 96);
            }

            c--;



        cout << endl;
    }

    d = n - 1;
    e = n - 1;
    //print second half 
    for (lb = 1; lb <= n - 1; lb++) {

        //print space 1
        for (spacea = 1; spacea <= lb; spacea++) {
            cout << " ";
        }

        //print letter1
        cout << (char)(e+96);
        

        //print space2
        for (spaceb = 1; spaceb <= (2 * d - 3); spaceb++) {
            cout << " ";
        }
        d--;

        if (lb <= (n-2)) {
            //print letter2
            cout << (char)(e+96);
        }
        e--;

        cout << endl;
    }
   

}

