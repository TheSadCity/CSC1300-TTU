/*

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct CarInfo{
    string make;
    string model;
    int year;
};
struct Car{
    string color;
    double cost;
};


int main(){

    const int numCars = 3;
    CarInfo spec[numCars];
    Car worth[numCars];


    for(int i =0; i < numCars; i++){

        cout << "Enter data for car "<< i+1<< endl;
        cout << "What car is it? ";
        getline(cin, spec[i].make);
        cout << "What model? ";
        getline(cin, spec[i].model);
        cout << "Year of the car ";
        cin>> spec[i].year;
        cin.ignore();
        cout << "Color of the car? ";
        getline(cin, worth[i].color);
        cout << "How much does it cost? ";
        cin >> worth[i].cost;
        cin.ignore();
        cout << endl;

    }

    for(int i =0; i < numCars; i++){

        cout << "Your car: \n";
        cout << "Make: "<< spec[i].make<< endl;
        cout << "Model: "<< spec[i].model<< endl;
        cout << "Year: "<< spec[i].year<<endl;
        cout << "Color: "<< worth[i].color<<endl;
        cout << "Cost: $"<< worth[i].cost << endl;
        cout << endl;

    }    



return 0;
}