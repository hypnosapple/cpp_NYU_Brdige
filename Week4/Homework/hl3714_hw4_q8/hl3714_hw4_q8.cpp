// hl3714_hw4_q8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int Ra, Rb; // for the first and second number in the range
    int inGuess; //how many guesses does the user take
    int guessN; // for the number of guess
    int user; // user's input number

    //seed the random number generator
    srand(time(0));

    //generate a random number from 1-100
    int random = rand() % 100 + 1;
    
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    guessN = 5;
    inGuess = 0;

    //initialize range for a and b
    Ra = 1;
    Rb = 100;

    while (guessN > 0) {
        // increase inguess number
        inGuess++;

        //print the range
        if (guessN == 5) {
            cout << "Range: [" << Ra << ", " << Rb << "], ";
        }
        else {
            //compare the user's input with the random number
            if ( user < random) {
                Ra = user;
                cout << "Range: [" << Ra << ", " << Rb << "], ";
            }
            else if ( user > random) {
                Rb = user;
                cout << "Range: [" << Ra << ", " << Rb << "], ";
            } 
        }

        //print the guess left
        cout << "Number of guesses left: " << guessN << endl;

        cin >> user;

        cout << "Your guess: " << user << endl;

        //if the user guessed correctly
        if (user == random) {
            cout << "Congrats! You guesses my number in " << inGuess << " guesses.";
            return 0;
        }
        else {
            if (user < random) {
                cout << "Wrong! My number is bigger." << endl << endl;
            }
            else if (user > random) {
                cout << "Wrong! My number is smaller." << endl << endl;
                }
        }
        //update guess number
        guessN--;
    }

    //if the user used all the guess chances
    if (guessN == 0) {
        cout << "Out of guesses! My number is " << random << endl;
        return 0;
    }
}

