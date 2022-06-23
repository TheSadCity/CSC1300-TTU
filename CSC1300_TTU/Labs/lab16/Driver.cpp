/*

Purpose:
*/
#include <iostream>
#include <string>
#include <iomanip>
#include "Elephant.h"

using namespace std;

int main() {
    float total = 0;
    float average = 0;
    int mostFoodEaten = 0;
    char zooName[100];
    float eaten[SIZE];
    string elephantNames[SIZE];

    cout << "Hello! What is the name of your zoo?\n";

    cin.getline(zooName, 100);

    getElephantData(eaten[SIZE], elephantNames);

    getStats(eaten[SIZE], total, average, mostFoodEaten);

    for (int i = 0; i < 80; i++){
        cout << "-";
    }

    cout << setprecision(2) << fixed << showpoint;
    cout << "\nThe total amount of food consumed by all " << SIZE << " elephants at " << zooName << " is " << total << " in one month.\n";
    cout << "The average amount of food consimed at " << zooName << " is " << average << " pounds.\n\n\n";
    cout << "The elephant who eats the most (" << eaten[mostFoodEaten] << " pounds) is " << elephantNames[mostFoodEaten] << "!\n";

    for (int i = 0; i < 80; i++){
        cout << "-";
    }

return 0;
}