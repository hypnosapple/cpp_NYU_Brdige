// challenging.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char frame = '#';
	char planks = '$';
	char space = ' ';
	int input;

	cout << "Please enter a positive integer. " << endl;
	cin >> input; 

	//print by each row (up to down)
	for (int row = 1; row <= input; row++) {
		for (int column = 1; column <= input; column++) {
			
			if (row == 1 || row == input || column == 1 || column == input) {
				cout << frame;
			}
			else if (row == column || row + column == input + 1) {
				cout << planks;
			}
			else {
				cout << space;
			}
		}

		cout << endl;
	}
}

