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

string name;
double g1;
double g2;
double g3;
double avg;

cout << "Enter the student's name: ";
getline (cin , name);

cout << "Enter " << name << " first test grade: ";
cin >> g1;
cin.ignore();

cout << "Enter " << name << " second test grade: ";
cin >> g2;

cout << "Enter " << name << " third test grade: ";
cin >> g3;

avg = (g1 + g2 + g3) / 3;

cout <<	setprecision(2) << fixed << showpoint << name << " has a test average of " << avg;

return 0;
}