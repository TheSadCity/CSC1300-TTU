/*
File Name:
Name:
Date:
Purpose:
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double costWing = 0.99;
	int numWing;
	double tax = 0.085;
	double bill;
	double tTax;
	double cost;

	/* 	the line below will allow floating point amounts to display
		two numbers after the decimal point.  (it will make amounts pretty) */
	cout <<	setprecision(2) << fixed << showpoint; 
	cout << "\n\nPlease input the number of hot wings purchased: ";
	
	cin>> numWing;
	
	cost = (costWing * numWing);
	tTax = cost * tax; 
	bill = cost + tTax;
	
	cout << "The total bill is " << bill << ".\n";
	
	return 0;
}
