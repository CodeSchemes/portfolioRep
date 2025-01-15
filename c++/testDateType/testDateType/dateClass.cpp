/********************
Author: William Brown
Date: 5/24/2024

*********************/

#include "dateClass.h"
#include <iostream>

using namespace std;
/********************
Author: William Brown
Date: 5/24/2024
	Function Name: dateClass 
	This function intializes member variables.
Parameters: none 
	day is set to 1
	month is set to 1
	year is set to 2000 
	Assumptions: none 
*********************/
dateClass::dateClass()
{
	day = 1;
	month = 1;
	year = 2000;
}


/********************
Author: William Brown
Date: 5/24/2024
	Function Name: dateClass
	This function intializes member variables with the values sent in.
Parameters: 
	int dayIn - initial value for day 
	int monthIn - initial value for month
	int yearIn - initial value for year 
Assumptions: 
	dayIn is between 1 and 30 unless the month is febuary or a month containing 31 ->
	-> days such as January, March, May, July, August, October, and December

	monthIn is between 1 and 12
*********************/
dateClass::dateClass(int dayIn, int monthIn, int yearIn) {
	day = dayIn;
	month = monthIn;
	year = yearIn;

}

/********************
Author: William Brown
Date: 5/24/2024
	Function Name:  ~dateClass 
	This function cleans up memory. 
Parameters:

Assumptions:

*********************/

dateClass::~dateClass() {

	//cleans up memory 
}

/********************
Author: William Brown
Date: 5/24/2024
	Function Name: datePrint
`	THios function prints the date is two formats mm/dd/yyyy & month/dd/2222
Parameters:

Assumptions:

*********************/
void dateClass::datePrint() const
{
	cout << day << '/' << month << '/' << year << endl;
	switch (month) {
	case 1: cout << "January" << '/' << day << '/' << year << endl << endl;
		break;
	case 2: cout << "Febuary" << '/' << day << '/' << year << endl << endl;
		break;
	case 3: cout << "March" << '/' << day << '/' << year << endl << endl;
		break;
	case 4: cout << "April" << '/' << day << '/' << year << endl << endl;
		break;
	case 5: cout << "May" << '/' << day << '/' << year << endl << endl;
		break;
	case 6: cout << "June" << '/' << day << '/' << year << endl << endl;
		break;
	case 7: cout << "July" << '/' << day << '/' << year << endl << endl;
		break;
	case 8: cout << "August" << '/' << day << '/' << year << endl << endl;
		break;
	case 9: cout << "September" << '/' << day << '/' << year << endl << endl;
		break;
	case 10: cout << "October" << '/' << day << '/' << year << endl << endl;
		break;
	case 11: cout << "November" << '/' << day << '/' << year << endl << endl;
		break;
	case 12: cout << "December" << '/' << day << '/' << year << endl << endl;
		break;
	default: cout << "This is not a valid month!";
		break;
	}

}