// testDateType.cpp : This file contains the 'main' function. Program execution begins and ends there.
/********************
Author: William Brown
Date: 5/24/2024

*********************/

#include "dateClass.h"
#include <iostream>
using namespace std;
int main()
{
    dateClass startDate;
    dateClass setDate(28, 11, 2001);
    dateClass copyDate(setDate);

    cout << endl;
    cout << "startDate = ";
    startDate.datePrint();
    cout << endl;
    cout << "setDate = ";
    setDate.datePrint();
    cout << endl;
    cout << "copyDate = ";
    copyDate.datePrint();
    cout << endl;

    return 0;
}

