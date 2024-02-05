// challenging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int l;
    int a, b, c;
    int mc;
    int counterLspace;
    int counterRspace;
    int counterMspace;
    int counterMMspace;
    int counterLLspace;
    int counterLRspace;

    cout << "Please enter a positive integer: " << endl; 
    cin >> n;
                                            
    counterLspace = 1;
    counterRspace = 1;
    counterMspace = n;
    counterMMspace = 2;
    counterLLspace = (n-4)/2;
    counterLRspace = (n - 4) / 2;

    for (l = 1; l <= (2 * n) - 1; l++) {

        //print the first and last line
        if (l == 1 || l == (2 * n - 1)) {
            for (a = 1; a <= n; a++) {
                cout << "#";
            }
        } //print second and last second line
        else if (l == 3 || l == (2*n-3) ){
            cout << "#$";
            for (c = 1; c <= n - 4; c++) {
                cout << " ";
            }
            cout << "$#";
        } //print first a for each odd line
        else if (l % 2 == 1) {
            cout << "#";
            //print upper left space
            if (l >= 5 && l <= n - 1) {
                for (c = 1; c <= counterLspace; c++) {
                    cout << " ";
                }
                cout << "$";
                counterLspace++;

                //print upper middle space
                for (mc = 1; mc <= counterMspace - 6; mc++) {
                    cout << " ";
                }
                cout << "$";
                counterMspace -= 2;

                //print the upper right space
                for (c = 1; c <= counterRspace; c++) {
                    cout << " ";
                }
                counterRspace++;
            } //print lower part
            else if (l > n && l < (2 * n - 3)) {
                //print lower left space
                for (c = counterLLspace; c > 0; c--) {
                    cout << " ";
                }
                counterLLspace--;
                cout << "$";

                //print lower middle space
                if (l >= n + 2) {
                    for (mc = 1; mc <= counterMMspace; mc++) {
                        cout << " ";
                    }
                    counterMMspace += 2;
                }
                
                cout << "$";

                //print lower right space
                for (c = counterLRspace; c > 0; c--) {
                    cout << " ";
                }
                counterLRspace--;
            }
            cout << "#";
        }  

        cout << endl;
    }
}

