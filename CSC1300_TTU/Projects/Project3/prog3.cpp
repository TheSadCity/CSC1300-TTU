/*

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int carnOrHerb(string);
bool searchCarnivore(string);
bool searchHerbivore(string);
bool overTenGrand(string);
void printDino(ofstream&, ifstream&, string, int[]);
void printResults(int[], string[]);


int main(){
const int SIZE = 6;
const int  INFOSIZE= 4;
int totalsArray[SIZE] = {0, 0, 0, 0, 0, 0};
string::size_type search; 
ifstream inFile;
ofstream outFile;
string fileName;
string nameDino;
string labelsArray[SIZE] = {"\t\t   TOTAL DINOS", "\t TOTAL CARNIVORE DINOS", "\t TOTAL HERBIVORE DINOS", "\t DINOS OVER 10,000 LBS", "    DINO NAMES END IN 'SAURUS'", "\t     ANIMALS NOT DINOS"};

    cout << "Dinosaur Directory File Name (dinoDirectory.txt): ";
    cin >> fileName;
    cout << endl;	

    inFile.open (fileName);
        
        while(!inFile.is_open()){

            cin.ignore(INT_MAX);
            cout << "Unable to open, re-enter File Name : ";
            cin >> fileName;
            cout << endl;
        }


        while(getline(inFile, nameDino, '#')) {

            search = nameDino.find("saurus");

            if (search != string::npos){
                totalsArray[4] += 1;
            }

            switch (carnOrHerb(nameDino)) {

                case 1: totalsArray[0] += 1;
                        totalsArray[1] += 1;
                        outFile.open("carnOutFile.txt", ios::app);
                        cout << nameDino << " is being printed to the CARNIVORE file!\n";
                        break;

                case 2: totalsArray[0] += 1;
                        totalsArray[2] += 1;
                        outFile.open("herbOutFile.txt", ios::app);
                        cout << nameDino << " is being printed to the HERBIVORE file!\n";
                        break;

                case -1: totalsArray[5] += 1;
                        outFile.open("otherOutFile.txt", ios::app);
                        cout << nameDino << " is being printed to the OTHER file!\n";
                        break;
            }

            printDino(outFile, inFile, nameDino, totalsArray);
            outFile << endl;
            outFile.close();
        }

        printResults(totalsArray, labelsArray);
        outFile.close();
        inFile.close();


return 0;
}

//done
// carnOrHerb function runs searches for the carnivore and herbivore in the appropriate files if neither return true assumes that it is not a dino
int carnOrHerb(string nameDino){

    if (searchCarnivore(nameDino)){
        return 1;
    }

    else if (searchHerbivore(nameDino)){
        return 2;
    }

    else{
        return -1;
    }

}

//done
// searchCarnivore checks carnivore file to find if the dino is a carnivore
bool searchCarnivore(string nameDino){

    ifstream inFile;
    string dino;
    inFile.open("carnivores.txt");

    while(getline(inFile, dino, '#')) {
        if (dino == nameDino) {
            inFile.close();
            return true;
        }
    }

    inFile.close();

    return false;

}

//done
// searchHerbivore Checks the herbivore file to find if the dino is a herbivore 
bool searchHerbivore(string nameDino){

    ifstream inFile;
    string dino;
    inFile.open("herbivores.txt");

    while(getline(inFile, dino, '#')) {

        if (dino == nameDino) {
            inFile.close();
            return true;
        }
    }

    inFile.close();
    return false;

}

//done
// printDino Prints out the Height, Weights, Food, and the description to specified file(herbOutFile, carnOutFile, otherOutFile) after calling the overTenGrand function 
void printDino(ofstream& outFile, ifstream& inFile , string nameDino, int totalsArray[]) {
    
    string dino;
    string::size_type big;
    const int INFOSIZE= 4;

    outFile << "DINOSAUR NAME: " << setw(1) << " " << nameDino << endl;

    for(int i = 0; i < INFOSIZE; i++) {

        getline(inFile, dino, '#');

        big = dino.find(" lbs");

        if ((big != string::npos) && (overTenGrand(dino))){
            totalsArray[3] += 1;
        }

        switch (i) {
            case 0:
                outFile << "HEIGHT/LENGTH:	" << dino << endl;
                break;
            
            case 1:
                outFile << "MASS:" << setw(11) << " " << dino << endl;
                break;
            
            case 2:
                outFile << "EATS:" << setw(11) << " " << dino << endl;
                break;
            
            case 3:
                outFile << "DESCRIPTION;    " << dino << endl;
                break;
        }
    }
}

//done
// overTenGrand Checks to see if the animal is over 10,000 lb returns true or false
bool overTenGrand(string weight){

    int num = 0;
    string::size_type over;

    over = weight.find("to ");

    if (over != string::npos) {
       weight.erase(weight.begin(), weight.begin()+(over+2));
    }

    num = stoi(weight);

    over = weight.find(",");

    if (over != string::npos) {
        num *= 1000;
    }
    
    if (num > 10000){
        return true;
    }

    else {
        return false;
    }
}

//done
// printResults simply prints the results of the totals when the dino's have been sorted
void printResults(int totalsArray[], string labelsArray[]) {

    string line(50, '-');

    cout << line << '\n';

    for (int i = 0; i < 6 ; i++) {
        cout << labelsArray[i] << ": " << totalsArray[i] << '\n';
    }

    cout << line << '\n';

}


/*over 10,000 failed attemps 
1.
stringstream over(weight);
    string temp;

    weight ="";

    while (getline(over, temp, ',')) {
    // Concatenating in the string
    // to be returned
    weight = weight + temp;
    }

    int good;
    over << weight;

    while (!over.eof()){

        over >> temp;
        if (stringstream(temp)>> good){
            good = stoi(temp);
            cout << good;
        }
    }

    if (good >= 10000){
        return true;
    }

    else{
        return false;
    }

2.
stringstream over;

    over << weight;

    string temp;
    int good;

    while (!over.eof()){

        over >> temp;
        if (stringstream(temp)>> good){

            if (good >= 10000){
                cout << good << " ";
            }
        }
    }
    if (good >= 10000) 
        return true;

    else
        return false;


*/