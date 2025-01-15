// payroll.cpp
// Joanie
// 2/6/2024


#include <iostream>		// for cin, cout
#include <iomanip>		// for setprecision, setw
#include <fstream>		// for file input and output

using namespace std;

// constants
const double HOURS_FULL = 40.0;
const double OT_RATE = 1.5;

// prototypes
double calcPay(double hours, double hourly);

int main()
{
	// declare variables
	int 	 empID;
	double 	 inHours;
	double 	 payRate;
	double 	 pay;
	ofstream fileOut;

	fileOut.open("payroll report.txt");

	fileOut << "Employee    Hours     Pay		" << endl
		<< "   ID      Worked    Rate     Pay" << endl << endl;

	cout << fixed;
	fileOut << fixed;

	// prompt and read in empID
	cout << endl;
	cout << "Enter the employee ID: ";
	cin >> empID;

	while (empID != 0)
	{
		// prompt and read in hours
		cout << "Enter the hours worked: ";
		cin >> inHours;

		// prompt and read in payRate
		cout << "Enter the pay rate: ";
		cin >> payRate;

		// calculate pay
		pay = calcPay(inHours, payRate);

		// print empID, hours, payRate, pay
		cout << endl;
		cout << setw(5) << empID
			<< setw(10) << setprecision(1) << inHours
			<< setw(10) << setprecision(2) << payRate
			<< setw(10) << pay << endl;

		fileOut << setw(6) << empID
			<< setw(10) << setprecision(1) << inHours
			<< setw(9) << setprecision(2) << payRate
			<< setw(10) << pay << endl;


		// prompt and read in empID
		cout << endl;
		cout << "Enter the employee ID: ";
		cin >> empID;

	}

	return 0;
}



double calcPay(double hours, double hourly) {
	double pay;

	if (hours > HOURS_FULL)
	{
		pay = (HOURS_FULL * hourly) +
			((hours - HOURS_FULL) * (hourly * OT_RATE));
	}
	else
	{
		pay = hourly * hours;
	}
	return pay;
}
