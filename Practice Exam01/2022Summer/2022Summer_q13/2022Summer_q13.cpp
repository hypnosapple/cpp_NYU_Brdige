// 2022Summer_q13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int l;
    int stl, sp; //left side stars, space, right side stars
    int starCounter; // for counting half of the amount of stars during each loop 
    int starCounter2;
    int stlb, spb; //the second part
    int c; //for second part line count

    cout << "Please enter a positive integer: ";
    cin >> n;

    c = n;
    //print the first half
    for (l = 1; l <= (2*n + 1); l++) {

        starCounter = 0;
        starCounter2 = 0;
        //print lines with full stars
        if (l == 1 || l == n + 1 || l == 2*n+1) {
            for (int i = 1; i <= 2 * n; i++) {
                cout << "*";
            }
        }
        else if (l > 1 && l < n+ 1){
            for (stl = 1; stl <= l - 1; stl++) {
                cout << "*";
                starCounter++;
            }
            //update starcounter
            starCounter *= 2;

            //print the space
            for (sp = (2 * n - starCounter); sp > 0; sp--) {
                cout << " ";
            }

           //print the right side
            for (stl = 1; stl <= l - 1; stl++) {
                cout << "*";
                starCounter++;
            } 

        }
        else if (l > n + 1 && l < (2 * n + 1)) {

            //print left star
            for (stlb = c-1; stlb> 0 ; stlb--){
                cout << "*";
                starCounter2++;
            }

            //update starcounter
            starCounter2 *= 2;

            //print space
            for (spb = (2 * n - starCounter2); spb > 0; spb--) {
                cout << " ";
            }

            //print the right side
            for (stlb = c - 1; stlb > 0; stlb--) {
                cout << "*";
                
            }
            c--;
        }
       
        
        cout << endl;
    }

}

