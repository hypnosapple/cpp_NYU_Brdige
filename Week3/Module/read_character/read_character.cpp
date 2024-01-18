// read_character.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char UserCh;
    std::cout << "Please enter a character: \n";
    std::cin >> UserCh;

    if (UserCh >= 'a' && UserCh <= 'z') {
        std::cout << UserCh << " is a lower case letter. \n";
    }
    else if (UserCh >= 'A' && UserCh <= 'Z') {
        std::cout << UserCh << " is an upper case letter. \n";
    } 
    else if (UserCh >= '0' && UserCh <= '9') {
        std::cout << UserCh << " is a digit. \n";
    }
    else {
        std::cout << UserCh << " is not alpha-numeric character \n";
    }
}

