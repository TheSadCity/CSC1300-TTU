/*
File Name:
Name:
Date:
Purpose:
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main(){

    string item1;
    string item2;
    int amount1;
    int amount2;
    double itemCost1;
    double itemCost2;
    double taxState = 0.0975;
    double totalC;
    double totalT;
    double bill;

cout <<	setprecision(2) << fixed << showpoint; 

cout << "Please input the name of the first item: "; //first item group.
cin >> item1;

cout << "\nPlease input the number of " << item1 << " bought: ";
cin >> amount1;

cout <<"\nPleae input the price of " << item1 << ": $";
cin >> itemCost1;


cout << "\nPlease input the name of the second item: "; // secont item group.
cin >> item2;

cout << "\nPlease input the number of " << item2 << " bought: ";
cin >> amount2;

cout << "\nPleae input the price of "<< item2 << ": $";
cin >> itemCost2;

totalC = (amount1 * itemCost1) + (amount2 * itemCost2); // calculations

totalT = totalC * taxState ;

bill = totalC + totalT ;

cout << "\nThe total bill is $" << bill << ".\n";


return 0;
}