/*

*/

#include <iostream>
#include <cmath> // allows use of square root and square numebers
#include <string>
#include <cstdlib> //to generate random numbers rand(), srand()
#include <ctime> // enables time function
#include <iomanip> //formatting output 

using namespace std;

bool primary = false;
bool secondary;
bool plz;

string name1;
string name2;
string name3;
string location1;
string location2;
string location3;
string job1;
string job2;
string job3;
string com1;
string com2;
string com3;
string car1;
string car2;
string car3;
string spouse;
string jobTitle;
string placeOfWork;

int choice;
int randNum;
int num1;
int num2;
int num3;

double numLarge1;
double numLarge2;
double numLarge3;
double salary;

void menuGetChoice();
void randomNum();
void people();
void location();
void job();
void companies();
void cars();
void numbers();
void mason();
void result();

int main(){

    srand(time(0)); //Seeding random number generator

    do { // loop game start

        menuGetChoice();

            while (choice == 1){ //functions to repeat until choice is changed

                people();
                numbers();
                location();
                job();
                companies();
                mason();
                cars();
                result();
                menuGetChoice();
            }

    } while (primary == true);
    cout << "You chose to end the program.\nBye!\n";
    return 0;
}

// choose to start or end MASH
void menuGetChoice(){

    cout <<"Pick from the following menu:\n";

    cout << "1. Let's play MASH!\n";

    cout << "2. End Program.\n";

    cin >> choice;

    switch (choice){

        case 1: cout << "You chose to play MASH !\n";
                primary = true;
                 cout << endl;
            break;

        case 2: primary = false;
                //cout << "You chose to end the program.\nBye!\n";
            break;

        default : cout << "Invalid choice. Select 1 or 2\n";

    }
}

// random number generator
void randomNum(){

    randNum = rand() % 3 + 1;

}

// gets people for marriage 
void people(){
    cin.ignore();

    cout << "Enter in one person you like: ";
    getline (cin, name1);   

    cout << "Enter in another person you like: ";
    getline(cin, name2);

    cout << "Enter in a person you hate: ";
    getline(cin, name3);
    cout << endl;

}

// gets number of children
void numbers(){

secondary = true;

    while(secondary == true){
        cout << "Enter three numbers between 1 and 100, separated by a space.\n";
        cin >> num1;
        cin >> num2;
        cin >> num3;

        cout << endl;

        if (num1 >= 1 && num1 <=100 && num2 >= 1 && num2 <=100 && num3 >= 1 && num3 <=100){
            secondary = false;
        }

        if (num1 < 1 || num1 > 100){
            plz = true;
            while (plz == true){
                cout << "The first number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> num1;
                 if (num1 > 0 && num1 < 101){
                     plz = false;
                    secondary = false;
                }
            }
        }

        if (num2 < 1 || num2 > 100){

            plz = true;
            while (plz == true){
                cout << "The second number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> num2;
                if (num2 > 0 && num2 < 101){
                    plz = false;
                    secondary = false;
                }
            }
        }

        if (num3 < 1 || num3 > 100){
            plz = true;
            while (plz == true){
                cout << "The third number you entered was invalid.\n";
                cout << "Enter a number between 1 and 100.\n";
                cin >> num3; 
                if (num3 > 0 && num3 < 101){
                    plz = false;
                    secondary = false;
                }
            }
        }
    }
}

// Gets place they will live
void location(){
    cin.ignore();

    cout << "Enter in one city, state you like: ";
    getline(cin, location1);

    cout << "Enter in another city, state you like: ";
    getline(cin, location2);

    cout << "Enter in one city, state you hate: ";
    getline(cin, location3);

    cout << endl;

}

// Gets the job title to be assigned 
void job(){

    cout << "Enter in an awesome job title: ";
    getline(cin, job1);

    cout << "Enter in another awesome job title: ";
    getline(cin, job2);

    cout << "Enter in the worst job title ever: ";
    getline(cin, job3);
    cout<< endl;

}

// gets company worked for
void companies(){

    cout << "Enter a company or restaurant you like: ";
    getline(cin, com1);

    cout << "Enter another company or restaurant you like: ";
    getline(cin, com2);

    cout << "Enter a company or restaurant you hate: ";
    getline(cin, com3);
    cout<< endl;
}

// gets salary
void mason(){

secondary = true;

    while(secondary == true){
        cout << "Enter three numbers between 10,000 and 500,000, separated by a space. \n";
        cin >> numLarge1;
        cin >> numLarge2;
        cin >> numLarge3;

            if (numLarge1 >= 10000 && numLarge1 <=500000 && numLarge2 >= 10000 && numLarge2 <=500000 && numLarge3 >= 10000 && numLarge3 <=500000){
                secondary = false;
            }

            if (numLarge1 < 10000 || numLarge1 > 500000){
                plz = true;
                while (plz == true){
                    cout << "The first number you entered was invalid.\n";
                    cout << "Enter a number between 10,000 and 500,000.\n";
                    cin >> numLarge1;
                    if (numLarge1 >= 10000 && numLarge1 <=500000){
                        plz = false;
                        secondary = false;
                    }
                }
            }

            if (numLarge2 < 10000 || numLarge2 > 500000){

                plz = true;
                while (plz == true){
                    cout << "The second number you entered was invalid.\n";
                    cout << "Enter a number between 10,000 and 500,000.\n";
                    cin >> numLarge2;
                    if (numLarge2 >= 10000 && numLarge2 <=500000){
                        plz = false;
                        secondary = false;
                    }
                }
            }

            if (numLarge3 < 1000 || numLarge3 > 500000){
                plz = true;
                while (plz == true){
                    cout << "The third number you entered was invalid.\n";
                    cout << "Enter a number between 10,000 and 500,000.\n";
                    cin >> numLarge3; 
                    if (numLarge3 >= 10000 && numLarge3 <=500000){
                        plz = false;
                        secondary = false;
                    }
                }
            }
        }
        cin.ignore();
}

// Gathers cool cars to assign 
void cars(){
    cin.ignore();

    cout << "Enter in a car that you like: ";
    getline(cin, car1);

    cout << "Enter in another car that you like: ";
    getline(cin, car2);

    cout << "Enter in a car that you hate: ";
    getline(cin, car3);
    cout<< endl;

}

void result(){
    // house
    randNum = rand() % 4 + 1;

    if (randNum == 1){
        cout << "You will live in a mansion.\n";
    }
    else if (randNum == 2){
        cout << "You will live in a apartment.\n";
    }
    else if (randNum == 3){
        cout << "You will live in a shack.\n";
    }
    else if (randNum == 4){
        cout << "You will live in a house.\n";
    }
    // spouse
    randomNum();

    if (randNum == 1){
        cout << "You will be married to " << name1 << endl;
        spouse = name1;
    }

    else if (randNum == 2){
        cout << "You will be married to " << name2 << endl;
        spouse = name2;
    }

    else if (randNum == 3){
        cout << "You will be married to " << name3 << endl;
        spouse = name3;
    }

        // children
    randomNum();

    if (randNum == 1){
        cout << "You and "<<  spouse << " will have " << num1 << " children" << endl;
    }

    else if (randNum == 2){
        cout << "You and "<<  spouse << " will have " << num2 << " children" << endl;
    }

    else if (randNum == 3){
        cout << "You and "<<  spouse << " will have " << num3 << " children" << endl;
    }

    // place they will live
    randomNum();

    if (randNum == 1){
        cout << "You will live in " << location1 << endl;
    }

    else if (randNum == 2){
        cout << "You will live in " << location2 << endl;
    }

    else if (randNum == 3){
        cout << "You will live in " << location3 << endl;
    }

        // place they will work
    randomNum();

    if (randNum == 1){
        placeOfWork = com1;
    }

    else if (randNum == 2){
        placeOfWork = com2;
    }

    else if (randNum == 3){
        placeOfWork = com3;
    }

        // job title
    randomNum();

    if (randNum == 1){
        jobTitle = job1;
    }

    else if (randNum == 2){
        jobTitle = job2;
    }

    else if (randNum == 3){
        jobTitle = job3;
    }

        // salary
    randomNum();

    if (randNum == 1){
        salary = numLarge1;
    }

    else if (randNum == 2){
        salary = numLarge2;
    }

    else if (randNum == 3){
        salary = numLarge3;
    }

    // Place of work, job title, and salary
    cout << "You will work at " << placeOfWork << " as a " << jobTitle << " making " << salary << " a year.\n";

    // Car they will drive
    randomNum();

    if (randNum == 1){
        cout << "You will drive a " << car1 << endl;
    }

    else if (randNum == 2){
        cout << "You will drive a " << car2 << endl;
    }

    else if (randNum == 3){
        cout << "You will drive a " << car3 << endl;
    }

    cout << endl;
    cout << endl;

}





