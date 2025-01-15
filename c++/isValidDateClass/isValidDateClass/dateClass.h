#pragma once
#include <string>

using namespace std;

class dateClass {
public:

	
	dateClass(int dayIn, int monthIn, int yearIn); // overloaded
	~dateClass(); //deconstructor
	inputDate();
	void print() const;

private:
	dateClass(); //constructor
	int day,
		month,
		year;

};