// hl3714_hw4_q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	int line, starCount, spaceCount;
	int lineb, starCountb, spaceCountb;
	int c;
	int numberStars, numberSpace;

	cout << "Please enter a positive integer: " << endl;
	cin >> n;

	//check if the input is positive
	if (n < 1) {
		cout << "Please enter a valid input." << endl;
		return 0;
	}


	//loop the first half line
	for (line = n; line >  0; line--) {

		//print a sequence of spaces (linecount - 1)
		for (spaceCount = 1; spaceCount <= n - line; spaceCount++) {
				cout << " ";
			}

		//print a sequence of stars (1+2n)
		for (starCount = 1 + (2 * (line-1)); starCount >= 1; starCount--) {
				cout << "*";
		
		}

		// break the line
		cout << endl;
		}

	c = n;
	//loop the second half line
	for (lineb = 1; lineb <= n; lineb++) {

		//print a sequence of space (space number = line count -1)
		for (spaceCountb = c - 1; spaceCountb > 0; spaceCountb--) {
			cout << " ";

		}

		//print a sequence of stars
		for (starCountb = 1; starCountb <= 1+(2*(lineb -1)); starCountb ++) {
			cout << "*";
		}

		c--;
		// break the line
		cout << endl;
	}

}
 
