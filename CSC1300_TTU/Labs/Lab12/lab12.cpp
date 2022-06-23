/*

*/

#include <iostream>
#include <string>
#include <cstdlib> //to generate random numbers rand(), srand()
#include <ctime> // enables time function
#include <iomanip> //formatting output 

using namespace std;

int main(){
char choice;
int rnum;
int guess;
int count;

 srand(time(0));
 rnum = rand() % 100 + 1;

 cout << rnum;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        count ++;

        if (guess < 1 || guess > 100){
            cout << "You entered an invalid number. Choose between 1 and 100.\n";
        }
        
        if (guess > rnum){
            cout << "Too High\n";
            cout << endl;
        }
        else if (guess < rnum){
            cout << "Too Low \n";
            cout << endl;
        }
        else if (guess == rnum){
            cout << "Correct ! You got it in "<< count << " tries!\n";
            cout << endl;
            cout << "Do you want to play again (y/n)? ";
            cin >> choice;
                if (choice != 'y' || choice != 'n'){
                cout << "Invalid input. You must enter a 'y' or a 'n'.\n";
                }
        }

     }
      while(choice != 'n');


    
return 0;
}

