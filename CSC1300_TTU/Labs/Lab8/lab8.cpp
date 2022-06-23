// This program calculates the circumference of a circle.

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

main ()
{
	const double PI = 3.14159;
	string fullName;
	double circumference, diameter;

	cout << "\n\nWhat is the diameter of the circle?\n";
	cin >> diameter;
	cin.ignore();
	
	cout << "\n\nWhat is your first & last name?\n";
	getline(cin, fullName);

	// Calculate the circumference.

	circumference = PI * diameter;

	// Display the circumference.
	cout << "\n\nHello, " << fullName;
	cout << "! The circumference of your circle is: " << circumference;
	cout << endl << endl;
	
	return 0;
}