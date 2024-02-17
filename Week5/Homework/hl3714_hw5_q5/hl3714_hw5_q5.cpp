// hl3714_hw5_q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//call the function 
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
    outCountDivs = 0;
    outSumDivs = 0;

    for (int i = 1; i * i <= num; ++i) {

        // check if i is a divisor 
        if (num % i == 0) {
            // increment count of divisors
            ++outCountDivs;

            // add divisor to sum
            outSumDivs += i;

            // if i is not the square root 
            if (i != num / i && i != 1) {
                ++outCountDivs;
                outSumDivs += num / i;
            }
        }
    }
}

//call bool to check if the number is perfect
bool isPerfect(int num) {

    int countD, sumD;
    
    analyzeDividors(num, countD, sumD);
   
    return sumD == num;
}

int main() {
    int num, countDivs, sumDivs;

    cout << "Enter a positive integer >= 2: " ;
    cin >> num;

    //check for unvalid input
    if (num < 2) {
        cout << "Invalid input. Please enter a positive integer >= 2." << endl;
        return 1;
    }

    //show perfect num between 2 and M
    cout << "Perfect numbers between 2 and " << num << ":" << endl;
    for (int i = 2; i <= num; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    cout << "Amicable pairs between 2 and " << num << ":" << endl;
    for (int i = 2; i <= num; ++i) {
        int countDivs1, sumDivs1;
        analyzeDividors(i, countDivs1, sumDivs1);
        if (sumDivs1 >= 2 && sumDivs1 <= num) {
            int countDivs2, sumDivs2;
            analyzeDividors(sumDivs1, countDivs2, sumDivs2);
            if (sumDivs2 == i && i != sumDivs1) {
                cout << "(" << i << ", " << sumDivs1 << ") ";
            }
        }
    }
    cout << endl;

    // call to analyze divisors
    analyzeDividors(num, countDivs, sumDivs);

    cout << "The number of proper divisor " << "is: " << countDivs << endl;
    cout << "The sum of proper divisor " << "is: " << sumDivs << endl;

    //check if perfect
    if (isPerfect(num)) {
        cout << num << " is a perfect number." << endl;
    }
    else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}