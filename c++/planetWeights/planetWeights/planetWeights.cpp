// planetWeights.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	double weightIn;
	double weightOut = 0;
	string planetName;
	const double earthFactor = 1.0;
	const double venusFactor = 0.8975;
	const double marsFactor = 0.3507;
	const double saturnFactor = 1.0677;
	const double plutoFactor = 0.0899;
	const double moonFactor = 0.166;
	const double mercuryFactor = 0.4155;
	const double uranusFactor = 0.8947;
	const double neptuneFactor = 1.1794;
	const double jupiterFactor = 2.5374;

	cout << "This program calculates your weight to what it would be on another planet or moon" << endl << endl;
	cout << "Please Enter The Planet or Moon: ";
	cin >> planetName;

	planetName[0] = toupper(planetName[0]);

	while (planetName != "Exit") {

		if (planetName == "Earth" || planetName == "Moon" || planetName == "Venus" || planetName == "Mercury"
			|| planetName == "Mars" || planetName == "Jupiter" || planetName == "Neptune" || planetName == "Uranus"
			|| planetName == "Pluto" || planetName == "Saturn") {

			cout << "Please enter your weight: ";
			cin >> weightIn;

			if (planetName == "Earth") {
				weightOut = weightIn * earthFactor;
			}
			else if (planetName == "Venus") {
				weightOut = weightIn * venusFactor;
			}
			else if (planetName == "Mars") {
				weightOut = weightIn * marsFactor;
			}
			else if (planetName == "Saturn") {
				weightOut = weightIn * saturnFactor;
			}
			else if (planetName == "Pluto") {
				weightOut = weightIn * plutoFactor;
			}
			else if (planetName == "Moon") {
				weightOut = weightIn * moonFactor;
			}
			else if (planetName == "Mercury") {
				weightOut = weightIn * mercuryFactor;
			}
			else if (planetName == "Uranus") {
				weightOut = weightIn * uranusFactor;
			}
			else if (planetName == "Neptune") {
				weightOut = weightIn * neptuneFactor;
			}
			else if (planetName == "Jupiter") {
				weightOut = weightIn * jupiterFactor;
			}
			cout << "Your weight: " << weightIn << "lbs." << " is " << weightOut << "lbs." << " on " << planetName << endl;
		}
		else {
			cout << planetName << " Isn't a planet!" << endl;

		}

		cout << "Please Enter The Planet or Moon: ";
		cin >> planetName;

	}



	return 0;
}
