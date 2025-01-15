// stateArray.cpp : This file contains the "main" function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

//prototypes
int findStringInArray(string strToFind, string array[], int arraySize);


string stateAbb[50]{ "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", "GA", "HI", "ID", "IL", "IN",
                     "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT", "NE", "NV",
                     "NH", "NJ", "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI", "SC", "SD", "TN",
                     "TX", "UT", "VT", "VA", "WA", "WV", "WI", "WY" };
string stateNames[50]{ "ALABAMA", "ALASKA", "ARIZONA", "ARKANSAS", "CALIFORNIA", "COLORADO", "CONNECTICUT",
                       "DELAWARE", "FLORIDA", "GEORGIA", "HAWAII", "IDAHO", "ILLINOIS", "INDIANA", "IOWA", 
                       "KANSAS", "KENTUCKY", "LOUISIANA", "MAINE", "MARYLAND", "MASSACHUSETTS", "MICHIGAN",
                       "MINNESOTA", "MISSISSIPI", "MISSOURI", "MONTANA", "NEBRASKA", "Nevada", "NEW HAMPSHIRE",
                       "NEW JERSEY", "NEW MEXICO", "NEW YORK", "NORTH CAROLINA", "NORTH DAKOTA", "OHIO", "OKLAHOMA",
                       "OREGON", "PENNSYLVANIA", "RHODE ISLAND", "SOUTH CAROLINA", "SOUTH DAKOTA", "TENNESSEE",
                       "TEXAS", "UTAH", "VERMONT", "VIRGINIA", "WASHINGTON", "WEST VIRGINIA", "WISCONSIN", "WYOMING" };
const int MAX = 50;
int main()
{
	int i;
	int foundIndex;
	string stateInput;
    string stateOutput;
	cout << "Enter a state name or the two letter abbreviation (or quit): ";
    getline(cin, stateInput);
    transform(stateInput.begin(), stateInput.end(), stateInput.begin(),
        ::toupper);

    while (stateInput != "QUIT"){
        i = 0;
        if (stateInput.length() <= 2) {
            foundIndex = findStringInArray(stateInput, stateAbb, MAX);
            if (foundIndex == -1) {
                cout << stateInput << "is not a valid option!" << endl;
                cout << "Enter a state name or the two letter abbreviation (or quit): ";
                getline(cin, stateInput);
                transform(stateInput.begin(), stateInput.end(), stateInput.begin(),
                    ::toupper);
            }
            else {
                cout << "Full name for " << stateInput << " is " << stateNames[foundIndex] << endl;
                cout << "Enter a state name or the two letter abbreviation (or quit): ";
                getline(cin, stateInput);
                transform(stateInput.begin(), stateInput.end(), stateInput.begin(),
                    ::toupper);
            }
        }
        else {
            foundIndex = findStringInArray(stateInput, stateNames, MAX);
            if (foundIndex == -1) {
                cout << stateInput << "is not a valid option!" << endl;
                cout << "Enter a state name or the two letter abbreviation (or quit): ";
                getline(cin, stateInput);
                transform(stateInput.begin(), stateInput.end(), stateInput.begin(),
                    ::toupper);
            }
            else {
                cout << "Abbreviation for " << stateInput << " is " << stateAbb[foundIndex] << endl;
                cout << "Enter a state name or the two letter abbreviation (or quit): ";
                getline(cin, stateInput);
                transform(stateInput.begin(), stateInput.end(), stateInput.begin(),
                    ::toupper);
            }
        }
    }
    cout << "Goodbye!" << endl;

    return 0;
}


int findStringInArray(string strToFind, string array[], int arraySize) {

    int i;
    int foundIndex = -1;
    for (i = 0; i < arraySize; i++) {

        if (strToFind == array[i]) {
            foundIndex = i;
        }
    }

    return foundIndex;
}

