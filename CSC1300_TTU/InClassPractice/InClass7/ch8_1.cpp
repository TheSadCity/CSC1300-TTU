/*

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Song{
    string name;
    string singer;
    double length;
};


int main(){

    Song song;

    cout << "Enter the name of the song...    ";
    getline(cin, song.name);
    cout << "Enter the author...              ";
    getline(cin, song.singer);
    cout << "Enter the length of the song...  ";
    cin >> song.length;

    cout << endl;
    cout << endl;

    cout <<"Your song:\n";
    cout << "Name:   "<< song.name;
    cout << "\nAuthor: "<< song.singer;
    cout << "\nLength: "<< song.length;


return 0;
}