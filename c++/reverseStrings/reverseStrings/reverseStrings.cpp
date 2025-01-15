// reverseStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string name, lName, fName, mName;

    cout << "Please enter Last, Middle First name is this order with the comma and no space at the end: ";
    getline(cin, name);
    cout << endl;

    while (name != "exit") {
        // defining spaces for name id
        int firstSpace = name.find_first_of(' ');
        int secondSpace = name.find_last_of(' ');
        // name positioning
        char lChar = name.back();
        lName = name.substr(0, firstSpace - 1);
        mName = name.substr(firstSpace + 1, secondSpace - 7);
        fName = name.substr(secondSpace + 1, lChar);

        cout << "Hello " << fName << " " << mName << " " << lName << endl << endl;

        cout << "Please enter Last, Middle First name is this order with the comma and no space at the end: ";
        getline(cin, name);
        cout << endl;
    }
    return 0;
}
