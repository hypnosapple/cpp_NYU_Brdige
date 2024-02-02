// hl3714_hw4_q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int length;
    int sequence;
    int multipleSequence;
    float geoMean;

    //Start section a
    cout << "section a" << endl;
    cout << "Please enter the length of the sequence: ";
    cin >> length;

    cout << "Please enter your sequence: " << endl;

    multipleSequence = 1;

    for (int i = length; i > 0; --i) {
        cin >> sequence;
        multipleSequence *= sequence;
    }

    geoMean = pow (multipleSequence, (1.0 / length));

    cout << "The geometric mean is : " << geoMean << endl ; 

    //Start section b
    cout << endl << "section b" << endl;

    int lengthb;
    int sequenceb;
    int multipleSequenceb;
    float geoMeanb;
    bool endLoop;
    int Lengthb;

    cout << "Please enter a non-empty sequence of positive integers, ";
    cout <<  "each one in a separate line.End your sequence by typing - 1: " << endl;

    lengthb = 0;
    multipleSequenceb = 1;
    endLoop = false;

    while (endLoop == false) {
        cin >> sequenceb;
        if (sequenceb == -1) {
            endLoop = true;
        }
        else {
            multipleSequenceb *= sequenceb;
            lengthb ++ ;
        }
    }
    geoMeanb = pow(multipleSequenceb, (1.0 / lengthb));

    cout << "The geometric mean is : " << geoMeanb << endl;
}

