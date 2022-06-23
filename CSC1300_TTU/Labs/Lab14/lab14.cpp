/*

*/

#include <iostream>
using namespace std;
int menu(int);
void goblinSickDays();
int DisplayCoolMessage(int);


int main()
{
    int choice;
    int count = 0;
    do{
        cout << "WELCOME TO GRINGOTT's BANK!\n";

        choice = menu(choice);

        switch(choice)
        {
            case 1 : goblinSickDays();
            break;
            case 2 : count = DisplayCoolMessage(count);
            break;
            case 3 : cout << "You chose to display the cool message "<< count <<" times.\n";
                    cout << "Bye!\n";
            break;
            default: cout <<"Invalid choice. Please enter 1-3\n";
                     cout << "CHOICE: ";
                     cin >> choice;
        }
     } while(choice != 3);
    return 0;
}


int menu(int choice){
    
    cout <<"Please choose one of the following options: \n";
    cout << "\t1 - Enter Goblin Sick Days\n";
    cout << "\t2 - Display Something Cool\n";
    cout << "\t3 - End the Program\n";
    cout << endl;
    cout << "CHOICE: ";
    cin >> choice;
    return choice;
}

void goblinSickDays(){
    int goblinDays[3];
    int tellers;
    int sum;
    cout << "How many Goblin tellers worked at Gringotts during each of the last three years? ";
    cin >> tellers;
    for (int count = 1; count <= tellers ; count ++){
        cout <<"How many sick days was Goblin "<<count<<" out for, during year 1 ? ";
        cin >> goblinDays[0];
                cout <<"How many sick days was Goblin "<<count<<" out for, during year 2 ? ";
        cin >> goblinDays[1];
                cout <<"How many sick days was Goblin "<<count<<" out for, during year 3 ? ";
        cin >> goblinDays[2];

        sum = sum + goblinDays[0] + goblinDays[1] + goblinDays[2];
        
    }
    cout << "The "<<tellers<<" Goblins were out sick for a total of "<< sum << " days during the last 3 years\n";

    
}
int DisplayCoolMessage(int count)
{
cout << endl;
cout <<"$$\\      $$\\ $$\\                                    $$\\ $$\\               $$$$$$$\\                      $$\n";
cout <<"$$ | $\\  $$ |\\__|                                   $$ |$  |              $$  __$$\\                     $$ |    \n";
cout <<"$$ |$$$\\ $$ |$$\\ $$$$$$$$\\ $$$$$$\\   $$$$$$\\   $$$$$$$ |\\_/$$$$$$$\\       $$ |  $$ | $$$$$$\\  $$$$$$$\\  $$ |  $$\\  \n";
cout <<"$$ $$ $$\\$$ |$$ |\\____$$  |\\____$$\\ $$  __$$\\ $$  __$$ |  $$  _____|      $$$$$$$\\ | \\____$$\\ $$  __$$\\ $$ | $$  |    \n";
cout <<"$$$$  _$$$$ |$$ |  $$$$ _/ $$$$$$$ |$$ |  \\__|$$ /  $$ |  \\$$$$$$\\        $$  __$$\\  $$$$$$$ |$$ |  $$ |$$$$$$  /       \n";
cout <<"$$$  / \\$$$ |$$ | $$  _/  $$  __$$ |$$ |      $$ |  $$ |   \\____$$\\       $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<        \n";
cout <<"$$  /   \\$$ |$$ |$$$$$$$$\\$$$$$$$ |$$ |      \\$$$$$$$ |  $$$$$$$  |      $$$$$$$  |\\$$$$$$$ |$$ |  $$ |$$ | \\$$\\       \n";
cout <<"\\__/     \\__|\\__|\\________|\\_______|\\__|       \\_______|  \\_______/       \\_______/  \\_______|\\__|  \\__|\\__|  \\__|      \n";
                                                                                                                        
cout << endl;      
count ++;     
return count;                                          
}