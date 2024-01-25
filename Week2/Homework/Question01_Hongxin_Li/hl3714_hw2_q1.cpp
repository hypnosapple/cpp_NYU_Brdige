// Question01_Hongxin_Li.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int dollarV = 100;
const int quarterV = 25;
const int dimeV = 10;
const int nickelV = 5;
const int pennieV = 1;
//set the constant value for dollar, quarter, dime, nickel, and pennie

int main()
{
    int dollar;
    int quarterN;
    int dimeN;
    int nickelN;
    int pennieN;
    int cent;
    int total;

    cout << "Please enter number of coins: " << endl;
    cout << "# of quarters: " ;
    cin >> quarterN;

    cout << "# of dimes: " ;
    cin >> dimeN;

    cout << "# of nickels: " ;
    cin >> nickelN;

    cout << "# of pennies: " ;
    cin >> pennieN;
    
    //collect user input for each 

    total = (quarterN * quarterV) + (dimeN * dimeV) + (nickelN * nickelV) + (pennieN * pennieV);
    //calculate the total value 

    dollar = total / dollarV;
    //calculate the value for dollar

    cent = total % dollarV;
    //calculate the value for cent

    cout << "The totoal is " << dollar << " dollars and " << cent << " cents" << endl;
}

