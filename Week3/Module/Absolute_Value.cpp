// Absolute_Value.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int integer, absV;
    std::cout << "Please enter an integer: \n";

    std::cin >> integer;

    absV = integer;
    if (integer < 0) {
        absV = integer * (-1);
    }

        std::cout << "|" << integer << "|" << " = " << absV << "\n";
    

}

