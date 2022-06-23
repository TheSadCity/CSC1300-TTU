/*
File Name:
Name:
Date:
Purpose:
*/

#include <iostream>
using namespace std;


int main(){

int bones;
int time = 83;
double days;
double years;

cout << endl;
cout << "How many bones have you stolen? ";
cin >> bones;

cout<< endl;

days = bones * time;
years = days / 365;

cout << "You must go to prison for " << days <<" days, which is " << years << "years.\n"; 

return 0;
}