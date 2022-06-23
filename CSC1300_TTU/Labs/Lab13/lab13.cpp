/*

*/

#include <iostream>
#include <string>
#include <cstdlib> //to generate random numbers rand(), srand()
#include <ctime> // enables time function
#include <iomanip> //formatting output 

using namespace std;

int main(){
int rows;
int rowCount;
int spaceCount;
int space;


cout << "Enter number of rows: ";
cin >> rows;

while (rows <= 2 ){
    if(rows <= 2){
    cout << "\nOops! You must enter a number greater then 1!\n";
    }
}
space = 2 * rows - 2;
for (rowCount = 0; rowCount < rows; rowCount ++) {

    for (spaceCount = 0; spaceCount < space; spaceCount ++){
        cout << " ";
    }

    space = space - 1;

    for (spaceCount = 0; spaceCount <= rowCount; spaceCount ++){
        cout << "$ ";
    }
    cout << endl;
}


return 0;
}
