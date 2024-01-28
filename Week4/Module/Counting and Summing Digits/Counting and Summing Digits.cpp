

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sumDigit;
    int currentDigit;
    int count;


    cout << "Please enter a positive integer: ";
    cin >> num1;

    num2 = num1;
    sumDigit = 0;
    count = 0;

    while (num2 > 0) {
        currentDigit = num2 % 10; //to get the value of the unit digit
        sumDigit += currentDigit; // add the value to sum
        count ++; // count of the digit plus one
        num2 = num2 / 10; // eliminate the unit digit
    }

    cout << num1 << " has " << count << " digits ";
    cout << "and their sum is " << sumDigit << endl;
}

