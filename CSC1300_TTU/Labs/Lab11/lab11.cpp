/*

*/

#include <iostream>
using namespace std;

bool again = true;
int num;
char y;
char n;

int main(){

num = 0;
n = 'n';

    while (again == true)
    {

        cout << "What do you get if you add 4 + 18?  ";
        cin >> num;
        cout <<endl;
        cout << "Enter the letter 'y' if you want to quit.\n";
        cin >> n;
        cout << "The letter you entered is "<<n<<"\n";

        if (n == 'y' && num != 22){
            cout << "Oh goat foot!  You forgot how to add!\n";
            cout << endl;
        }
        else if (n == 'y' && num == 22){
            again = false;
        }
    }


return 0;
}