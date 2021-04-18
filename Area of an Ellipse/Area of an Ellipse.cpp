// This program will calculate the area of an ellipse

#include <iostream>
using namespace std;

int main()
{
    //a = major radius
    //b = minor radius
    //area = (pi)ab

    double a, b, area;
    const double pi = 3.14159;


    cout << "This program will calculate the area of an ellipse\n\n";
    cout << "Enter the measurement of the ellipse major radius: ";
    cin >> a;
    cout << "Enter the measurement of the ellipse minor radius: ";
    cin >> b;

    area = pi * a * b;

    cout << "\nThe area of the ellipse is " << area << "\n";

}