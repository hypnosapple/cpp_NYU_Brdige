// hl3714_hw3_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int price1;
    int price2;
    char member;
    double tax;

    double bPrice;
    double dPrice;
    double tPrice;

    //ask the user for the prices of two items
    cout << "Enter price of first item: ";
    cin >> price1;

    cout << "Enter price of second item: ";
    cin >> price2;
    
    //compared the price, the lower price will get a 50% off
    if (price1 < price2){
        dPrice = (price1 / 2) + price2;
    }
    else {
        dPrice = price1 + (price2 / 2); 
    }

    //Ask if the user has a membership card
    cout << "Does customer have a club card? (Y/N): ";
    cin >> member; 

    //a membership will get 10% addtional discount 
    if (member == 'y' || member == 'Y') {
        dPrice *= 0.9;
    }
    else if (member == 'n' || member == 'N') {
        dPrice = dPrice;
    }
    else {
        cout << "Please type a valid answer." << endl;
        return 0;
    }

    //ask the user about the tax rate
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax;


    bPrice = price1 + price2;
    //bace price equals the sum of two original prices

    tPrice = dPrice * ((tax / 100) + 1);
    //total price equals discount price times tax rate 

    cout << "Base price: " << bPrice << endl;
    cout << "Price after discounts: " << dPrice << endl;
    cout << "Total price: " << tPrice << endl;

    return 0;

}

