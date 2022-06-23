#include <iostream>
#include <string>
#include "Elephant.h"
using namespace std;

void getElephantData(float* eaten, string* elephantNames) {

    cout << "Enter the name and how many pounds of food each elephant ate last month.\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "ELEPHANT " << i + 1 << ":\n";
        cout << "     NAME - ";
        getline(cin, elephantNames[i]);
        cout << "     FOOD AMOUNT - ";
        cin >> eaten[i];
        cout << "\n";
        cin.ignore();
    }
}

void getStats(float eaten[], float &total, float &average, int &mostFoodEaten) {

    int mostFoodEatenCheck = 0;

    for (int i = 0; i < SIZE; i++) {
    total += eaten[i];
    }

    average = total;

    mostFoodEatenCheck = eaten[0];

    for (int i = 0; i < SIZE; i++) {
        if (eaten[i] > mostFoodEatenCheck) {
            mostFoodEaten = i;
        }  
    }

}
