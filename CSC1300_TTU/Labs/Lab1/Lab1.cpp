/*
Few Problems
*/

#include <iostream>
using namespace std;
double tempC;
double tempF;

int main(){

    cout<< "What is the temperature in Celcius? ";
    cin >> tempC;
    cout<< endl;
    tempF= (((9/5)*tempC)+32);
    cout<< tempC << " degrees Celcius is "<< tempF << " degrees Fahrenheit./n";
return 0;
}