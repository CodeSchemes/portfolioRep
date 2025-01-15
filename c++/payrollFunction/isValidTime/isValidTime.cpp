
#include <iostream>
#include <string>

using namespace std;

// prototypes
void inputTime(int& hr, int& min, string& desc);

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
		cout << "Enter time in the format \"hh:mmAM\": ";
		cin >> hr;
		cin.ignore(1);
		cin >> min >> desc;

		if ((hr <= 12 && hr >= 1) && (min <= 59 && min >= 0) && (desc == "am" && desc == "pm")) {
			bool isValidTime = true;
			validTime = isValidTime;
		}

	} while (!validTime);

}



