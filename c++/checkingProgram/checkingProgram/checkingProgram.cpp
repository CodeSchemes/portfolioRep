#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    double checkFee = .10;
    double intTotal = 0;
    string choice;
    double deposit = 0;
    double withdraw = 0;
    string total;
    double prevTotal = 0;
    double checkAmount = 0;

    ifstream fileIn("checkingInfo.txt", ios_base::app);
    ofstream fileOut("checkingInfo.txt", ios_base::app);
    fileIn.close();
    fileOut << fixed;


    std::cout << "Please type in D, W, C, or E" << endl
        << "D - Deposit" << endl
        << "W - Withdraw" << endl
        << "C - Check" << endl
        << "E - Exit" << endl;
    std::cin >> choice;

    while (choice != "E") {

        ifstream fileIn("checkingInfo.txt", ios_base::app);
        getline(fileIn, total, '\n');
        double intTotal = stod(total);
        prevTotal = intTotal;

        if (choice == "D") {
            std::cout << "Enter Amount to Deposit: ";
            std::cin >> deposit;
            intTotal = prevTotal + deposit;
            std::cout << "Account Balance: " << prevTotal << endl
                << "Deposit Amount: " << deposit << endl
                << "Current Balance: " << intTotal << endl << endl;
            ofstream fileOut("checkingInfo.txt");
            fileOut << setprecision(4) << intTotal << endl;
            fileOut.close();
        }
        else if (choice == "W") {
            std::cout << "Enter Amount to Withdraw: ";
            std::cin >> withdraw;
            intTotal = prevTotal - withdraw;
            std::cout << "Account Balance: " << prevTotal << endl
                << "Withdraw Amount: " << withdraw << endl
                << "Current Balance: " << intTotal << endl;
            ofstream fileOut("checkingInfo.txt");
            fileOut << setprecision(4) << intTotal << endl;
            fileOut.close();
        }
        else if (choice == "C") {
            std::cout << "Enter check amount: ";
            std::cin >> checkAmount;
            intTotal = (prevTotal + checkAmount) - checkFee;
            std::cout << "Account Balance: " << prevTotal << endl
                << "Withdraw Amount: " << checkAmount << endl
                << "Current Balance: " << intTotal << endl;
            ofstream fileOut("checkingInfo.txt");
            fileOut << setprecision(4) << intTotal << endl;
            fileOut.close();
        }
        else {
            std::cout << choice << " is not a valid input!" << endl << endl;
        }

        std::cout << "Please type in D, W, C, or E" << endl
            << "D - Deposit" << endl
            << "W - Withdraw" << endl
            << "C - Check" << endl
            << "E - Exit" << endl;
        std::cin >> choice;

        
    }
        
    fileIn.close();
    return 0;
}

