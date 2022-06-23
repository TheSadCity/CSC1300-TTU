/*

*/

#include <iostream>
using namespace std;

int dailyScreen;
int dailyStudy;

int main(){

    cout <<"Rounding to the nearest hour, how many hours is you daily average PHONE screen time?\n";
    cout << "AVG DAILY SCREEN-TIME HOURS:  ";   
    cin >> dailyScreen;
    cout << endl;


    cout << "Rounding to the nearest hour, how many hours is your daily average study or homework \ntime?\n";
    cout << "AVG DAILY STUDY or HOMEWORK HOURS:  ";
    cin >> dailyStudy;
    cout << endl;


    if (dailyScreen <= 2 && dailyStudy >=6){

        cout << "You need to socialize with people more often.\n";
        
    }

    else if (dailyScreen > 2 && dailyStudy >= 6){
        
        cout << "You need to socialize with people more and get off that phone.\n";

    }

    else if (dailyScreen <= 2 && (dailyStudy >= 2 && dailyStudy < 6)){

        cout << "You manage your time well.\n";
    }
    else if (dailyScreen > 2 && dailyStudy < 6){

        cout << "What are you goint to do if you loose that phone?\nIt is refering with your ability to have a real life\n";
    }

return 0;
}