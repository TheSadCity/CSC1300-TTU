/*

*/

#include <iostream>
#include <fstream>
#include "Primes.h"
using namespace std;

int main(){
    ifstream inFile;
    int low, high; 
    string fileName;

    cout << "What is the name of the file that you want the prime numbers to be printed to? (primes.txt)";

    cin >> fileName;

    inFile.open("range.txt");


    if (!inFile){
        cout << "Ranges ot found. Program terminating\n";
        return 1;
    }

    inFile >> low;
    inFile >> high;

    inFile.close();

    findPrimes (low, high, fileName.c_str());





    cout << "Prime numbers between "<< low << " and " << high << "have been printed to "<< fileName << endl << endl;
return 0;
}