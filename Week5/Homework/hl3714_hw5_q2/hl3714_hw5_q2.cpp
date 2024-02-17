// hl3714_hw5_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m + n - i - 1; ++j) {
            std::cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; ++k) {
            std::cout << symbol;
        }
        std::cout << std::endl;
    }
}


// Call printShiftedTriangle
void printPineTree(int n, char symbol) {
    for (int i = 2; i <= n + 1; ++i) {
        printShiftedTriangle(i, n - i + 1, symbol); 
    }
}

int main() {
    int n;

    cout << "Enter the number of triangles in the pine tree: " << endl;
    cin >> n;

    printPineTree(n, '#');

    return 0;
}

