// isValidDateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;
//prototypes
void inputDate(int month, int day, int year);
long calJDN(int& month, int& day, int& year);
bool isFromGregCalendar(int month, int day, int year);
bool isValidDate(int month, int day, int year);
int main() {

	int month;
	int day;
	int year;

	inputDate(month, day, year);

	// print time
	cout << endl;
	cout << month << '/';
	cout << day << '/' << year;
	cout << endl << endl;

	return 0;


}

void inputDate(int month, int day, int year) {

	bool validDate = true;
	do {
		cout << "Please enter a date in said format \"mm/dd/yyyy\": ";
		cin >> month;
		cin.ignore(1);
		cin >> day >> year;
	} while (!validDate);

	return;
}
long calJDN(int& month, int& day, int& year) {
	bool isGreg = isFromGregCalendar(month, day, year);
	double intRes1 = 0;
	double intRes2 = 0;
	double intRes3 = 0;
	double JDN = 0;

	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}
	if (isGreg) {
		intRes1 = 2 - year / 100 + year / 400;
	}
	intRes2 = static_cast<int>(365.25 * year);
	intRes3 = static_cast<int>(30.6001 * (month + 1));
	JDN = intRes1 + intRes2 + intRes3 + day + 1720994.5;
}
bool isFromGregCalendar(int month, int day, int year) {

	bool isGreg = true;

	if (!(month >= 10)) {
		isGreg = false;
	}
	if (!(day >= 15)) {
		isGreg = false;
	}
	if (!(year >= 1582)) {
		isGreg = false;
	}

	return isGreg;
}
bool isValidDate(int month,int day,int year) {
	bool finalAnswer = true;

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (!(day <= 31 && day >= 1)) {
			finalAnswer = false;
		}
		break;
	case 2: 
		if (year % 400 == 0) {

		}
		else if (year % 100 == 0) {
			finalAnswer = false;
		}
		else if (year % 4 == 0) {

		}
		else {
			finalAnswer = false;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (!(day <= 30) && !(day >= 1)) {
			finalAnswer = false;
		}
		break;
}
	
}