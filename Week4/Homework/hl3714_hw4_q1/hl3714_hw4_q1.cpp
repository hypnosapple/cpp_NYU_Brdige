// hl3714_hw4_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int posInt;
    int counter;
    int output;

    cout << "Section a" << endl;
    cout << "Please enter a positive integer: ";
        cin >> posInt;

    //check if the integer 
        if (posInt < 1) {
            cout << "Please enter a valid value.";
                return 0;
    } 

    counter = 1;

    while (counter <= posInt) {
        output = counter * 2;
        cout << output << endl;
        counter++;
    }

    int posInt2;
    int counter2;
    int output2;

    cout << endl << "Section b" << endl;
    cout << "Please enter a positive integer: ";
    cin >> posInt2;

    for (counter2 = 1; counter2 <= posInt2; counter2++) {
        output2 = counter2 * 2;
        cout << output2 << endl;
    }
    
    return 0;
}

