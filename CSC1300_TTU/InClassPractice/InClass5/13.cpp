/*

*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int findHighest(double[]);
int findLowest(double[]);
double findAverage(double[]);
const int SIZE =10;


int main(){
char firstName[15];
string itemName[SIZE];
double itemPrice[SIZE];
int high, low;
double average;

cout << "What is your name: ";
    cin.getline(firstName, 50);

cout << "\nTell me 10 useful things and their price:\n";

for(int c = 0; c < 10 ; c++){
    cout << "Useful thing "<<c+1<< " : ";
    getline(cin,itemName[c]);
    
    cout << "PRICE FOR THING "<< c+1<< " : ";
    cin >> itemPrice[c];
    cin.ignore();

}
high = findHighest(itemPrice);
low = findLowest(itemPrice);
average = findAverage(itemPrice);
cout << "\n\n*************Results*************\n";
cout << "HIGHEST PRICE: " << itemName[high] << " with price $" << itemPrice[high] << endl;
cout << "LOWEST PRICE: " << itemName[low] << " with price $" << itemPrice[low] << endl;
cout << "AVERAGE PRICE: $" << average << endl << endl;
return 0;
}


int findHighest(double itemPrice[SIZE]){
    double highest = itemPrice[0];
    int high = 0;
    for (int a = 0; a < 10 ; a ++){
        if(highest < itemPrice[a]){
            highest = itemPrice[a];
            high = a ;
        }
    }
return high;
}
int findLowest(double itemPrice[SIZE]){
    double lowest = itemPrice[0];
    int low = 0;
    for (int a = 0; a < 10 ; a ++){
        if(lowest > itemPrice[a]){
            lowest = itemPrice[a];
            low = a ;
        }
    }
return low;
}

double findAverage (double itemPrice[]){
    double total =0.00;
    for (int a=0; a< SIZE; a++){
        total += itemPrice[a];
    }
    return total;
}