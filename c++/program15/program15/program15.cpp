// program15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct formulas {
    int length, width, height;
};

int main()
{
    formulas variables;
    int length;
    int width;
    int height;
    cout << "Please enter Length, Width, Height in that order seperately (0 in length to exit): ";
    cin >> length;
    if (length == 0) {
        return 0;
    }
    else {
        cin >> width >> height;
    }
    variables.length = length;
    variables.width = width;
    variables.height = height;
    while (length != 0) {
        double surfaceArea = 2 * ((variables.length * variables.width) + (variables.length * variables.height) + (variables.height * variables.width));
        double volume = variables.length * variables.width * variables.height;
        cout << "Prism Dimensions: " << endl
            << "    Length: " << length << endl
            << "    Width: " << width << endl
            << "    Height: " << height << endl;

        cout << "Surface area: " << surfaceArea << endl
            << "Volume: " << volume << endl;

        cout << "Please enter Length, Width, Height in that order seperately (0 in length to exit): ";
        cin >> length;
        if (length == 0) {
            return 0;
        }
        else {
            cin >> width >> height;
        }
        variables.length = length;
        variables.width = width;
        variables.height = height;
    };

    return 0;

}


