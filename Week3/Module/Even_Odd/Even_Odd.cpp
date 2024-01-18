// Even_Odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	int number;
	std::cout << "Please enter a positive integer: \n";
	std::cin >> number;

	if (number % 2 == 0) {
		std::cout << number << " is an even number. \n";
	}
	else{
		std::cout << number << " is an odd number. \n";
	}
}
