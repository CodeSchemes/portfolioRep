// dateClass.h
// This file holds the definition of the date class
/********************
Author: William Brown
Date: 5/24/2024

*********************/


#pragma once

#include <string>

using namespace std;
class dateClass {
	public:
		dateClass();
		dateClass(int dayIn, int monthIn, int yearIn);
		~dateClass();

		void datePrint() const;

	private:
		int day;
		int month;
		int year;
};