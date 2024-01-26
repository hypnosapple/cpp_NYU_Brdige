// hl3714_hw3_q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double kilo = 0.453592;
const double meter = 0.0254;

int main()
{
    double weight;
    double height;
    string status;
    double BMI;

    cout << "Please enter weight (in pounds): ";
    cin >> weight;

    cout << "Please enter height (in inches): ";
    cin >> height;

    weight *= kilo;
    height *= meter;
    //convert both weight and height into kilos and meters

    BMI = (weight) / (height * height);

    //define the user's status
    if (BMI < 18.5) {
        status = "Underweight";
    }
    else if (BMI >= 18.5 && BMI < 25) {
        status = "Normal";
    }
    else if (BMI >= 25 && BMI < 30) {
        status = "Overweight";
    }
    else {
        status = "Obese";
    }

    cout << "The weight status is: " << status << endl;

    return 0;
}

