// diamondProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	char inputL;
	int rows;
	int spaceNum = 0;
	int index = 0;

	cout << "Please Enter a Letter (E to exit): " << endl;
	cin >> inputL;

	cout << "Please Enter a Number of Rows: " << endl;
	cin >> rows;

	while (inputL != 'E') {

		if (rows % 2 != 0) {

			for (index = 0; index <= rows; index++) {
				
				for (spaceNum = 1; spaceNum <= rows - index; spaceNum++) {

					cout << " ";


				}
				for (spaceNum = 1; spaceNum <= 2 * index - 1; spaceNum++) {
					cout << inputL;
				}
				cout << endl;
			}

			for (index = rows - 1; index >= 1; index--) 
			{
				for (spaceNum = 1; spaceNum <= rows - index; spaceNum++) 
				{
					cout << " "; 
				}

				for (spaceNum = 1; spaceNum <= 2 * index - 1; spaceNum++) 
				{
					cout << "*"; 
				}

				cout << endl; 
			}

		}
		else {
			cout << rows << " Is an even number im adding 1" << endl;
			rows++;

			for (index = 0; index <= rows; index++) {

				for (spaceNum = 1; spaceNum <= rows - index; spaceNum++) {

					cout << " ";


				}
				for (spaceNum = 1; spaceNum <= 2 * index - 1; spaceNum++) {
					cout << inputL;
				}
				cout << endl;
			}

			for (index = rows - 1; index >= 1; index--)
			{
				for (spaceNum = 1; spaceNum <= rows - index; spaceNum++)
				{
					cout << " ";
				}

				for (spaceNum = 1; spaceNum <= 2 * index - 1; spaceNum++)
				{
					cout << "*";
				}

				cout << endl;
			}
		}
		cout << "Please Enter a Letter (E to exit): " << endl;
		cin >> inputL;

		cout << "Please Enter a Number of Rows: " << endl;
		cin >> rows;
	}

	return 0;

}


