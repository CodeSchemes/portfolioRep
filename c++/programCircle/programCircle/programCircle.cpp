// programCircle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int radius;
    int diameter;
    int circumference;
    int area;
    const double pi = 3.14159265358979323846;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << endl;

    while (radius != 0) {

        diameter=2 * radius;
        circumference=2 * pi * radius;
        area=pi * (radius * radius);

        cout << "Diameter: " << diameter << endl
            << "Circumference: " << circumference << endl
            << "Area: " << area << endl;

        cout << endl;
        cout << "Enter radius of circle: " << endl;
        cin >> radius;
    }
    return 0;
}

