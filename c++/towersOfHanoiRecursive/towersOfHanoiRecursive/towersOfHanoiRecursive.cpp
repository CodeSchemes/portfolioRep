// towersOfHanoiRecursive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void moveDisk(int numin, char start_rod, char end_rod, char aux_rod);

int main()
{
    
    int diskNum = 3;

    moveDisk(diskNum, 'A', 'C', 'B');
    return 0;


}

void moveDisk(int numIn, char start_rod, char end_rod, char aux_rod)
{
    if (numIn == 0) {
        return;
    }
    else {
        moveDisk(numIn - 1, start_rod, aux_rod, end_rod);
        cout << "Move disk " << numIn << " from rod " << start_rod
             << " to rod " << end_rod << endl;
        moveDisk(numIn - 1, aux_rod, end_rod, start_rod);
    }
}
