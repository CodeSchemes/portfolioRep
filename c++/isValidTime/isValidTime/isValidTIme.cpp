
#include <iostream>
#include <string>

using namespace std;

// prototypes
void inputTime(int& hr, int& min, string& desc);
bool isValidTime(int& hr, int& min, string& desc);

int main()
{
	int hour;
	int minutes;
	string desc;

	inputTime(hour, minutes, desc);

	// print time
	cout << endl;
	cout << hour << ':';
	if (minutes <= 9)
		cout << '0';
	cout << minutes << desc;
	cout << endl << endl;

	return 0;
}


void inputTime(int& hr, int& min, string& desc)
{
	bool validTime = true;

	do
	{
		validTime = isValidTime(hr, min, desc);

	} while (!validTime);

}


bool isValidTime(int& hr, int& min, string& desc) {
	bool answer1;
	bool answer2;
	bool answer3;
	bool finalAnswer;

	cout << "Enter time in the format \"hh:mmAM\": ";
	cin >> hr;
	cin.ignore(1);
	cin >> min >> desc;

	if ((hr <= 12 && hr >= 1)) {
		answer1 = true;
	}
	else {
		answer1 = false;
	}
	if ((min <= 60 && min >= 1)) {
		answer2 = true;
	}
	else {
		answer2 = false;
	}
	if ((desc == "AM" && desc == "PM")) {
		answer3 = true;
	}
	else {
		answer3 = false;
	}
	if ((answer1 == true) && (answer2 == true) && (answer3 == true)) {
		finalAnswer = true;
	}
	else {
		finalAnswer = false;
	}
	return finalAnswer;
}


