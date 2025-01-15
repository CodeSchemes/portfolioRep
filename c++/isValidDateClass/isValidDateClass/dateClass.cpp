#include "dateClass.h"
#include <iostream>

using namespace std;

dateClass::dateClass() {
	day = 28;
	month = 11;
	year = 2001;
}


dateClass::dateClass(int dayIn, int monthIn, int yearIn) {
	day = dayIn;
	month = monthIn;
	year = yearIn;
}

dateClass::~dateClass() {
	// clears memory
}


void dateClass::print() const {
		cout << endl;
	cout << month << '/';
	cout << day << '/' << year;
	cout << endl << endl;
}