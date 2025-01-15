



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string temp;
	double previousTemp = 0;
	double difference;
	int counter = 0;
	double totalTemp = 0;
	double avgTemp = 0;
	ofstream fileOut;
	ifstream fileIn;
	
	fileIn.open("temperatures.dat");
	fileOut.open("tempReport.txt");

	getline(fileIn, temp, '\n');

	fileOut << "Temperature		Difference" << endl;
	fileOut << fixed;
 

	while (counter < 12)
	{
		counter++;
		double intTemp = stod(temp);
		difference = intTemp - previousTemp;
		if (counter == 1) {
			totalTemp = intTemp + totalTemp;
			fileOut << setprecision(2) << intTemp
					<< "			"
				    << endl;

			fileIn >> setprecision(2) >> temp;

		} else {
			totalTemp = intTemp + totalTemp;
			fileOut << setprecision(2) <<  intTemp 
					<< "			"
					<< setprecision(2) << difference << endl;

			fileIn >> setprecision(2) >> temp;
			 
		}
		previousTemp = intTemp;
	}
	
	avgTemp = totalTemp / counter;

	cout << "Average Temp Is: " 
		 << setprecision(4) << avgTemp << endl
		 << "Total Temp Is: " 
		 << setprecision(10) << totalTemp;
	return 0;
}