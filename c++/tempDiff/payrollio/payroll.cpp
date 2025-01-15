// payroll.cpp
// William Brown
// 2/27/2024


#include <iostream>		// for cin, cout
#include <iomanip>		// for setprecision, setw
#include <fstream>		// for file input and output

using namespace std;

// constants
const double HOURS_FULL = 40.0;
const double OT_RATE = 1.5;

int main()
{
	// declare variables
	int 	 empID;
	double 	 hours;
	double 	 payRate;
	double 	 pay;
	ofstream fileOut;
	ifstream fileIn;

	fileOut.open("payOut.txt");
	fileIn.open("payroll.dat");

	fileOut << "Employee    Hours     Pay		" << endl
		<< "   ID      Worked    Rate     Pay" << endl << endl;


	fileOut << fixed;


	fileIn.ignore(100, '\n');
	fileIn >> empID;


	while (empID != 0)

	{
		//read in empID

		// prompt and read in hours

		fileIn >> hours;

		// prompt and read in payRate

		fileIn >> payRate;

		// calculate pay
		if (hours > HOURS_FULL)
		{
			pay = (HOURS_FULL * payRate) + ((hours - HOURS_FULL) * (payRate * OT_RATE));
		}
		else
		{
			pay = payRate * hours;
		}

		// file out empID, hours, payRate, pay


		fileOut << setw(6) << empID
			<< setw(10) << setprecision(1) << hours
			<< setw(9) << setprecision(2) << payRate
			<< setw(10) << pay << endl;


		fileIn >> empID;
	}

	return 0;
}




