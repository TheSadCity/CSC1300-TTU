/*

*/

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade will you earn on this lab assignment?" << endl;
	cout << "GRADE: ";
	cin >> grade;
/*
	if (grade == 'A')
		cout << "An A - you rock!!\n";
	else if (grade == 'B')
		cout << "You got a B - good job.\n" ;
	else if ( grade =='C')
		cout << "Earning a C is satisfactory.\n";
	else if(grade == 'D')
	{
		cout << "While D is passing, there is a problem.\n";
		cout << "You really didnt learn much.\n";
	}
	else if (grade =='F')
		cout << "Oh BARF!  You failed - better luck next time.\n";
	else
		cout << "You did not enter an A, B, C, D, or F.\n";
*/
    switch (grade)
     {
    case 'A': cout << "An A - you rock!!\n";
            break;
                            
    case 'B': cout << "You got a B - good job.\n" ;
            break;
                            
    case 'C':cout << "Earning a C is satisfactory.\n";
            break;
                
    case 'D':cout << "While D is passing, there is a problem.\nYou really didnt learn much.\n";
            break;
                
    case 'F':cout << "Oh BARF!  You failed - better luck next time.\n";
            break;

    default: cout << "You did not enter an A, B, C, D, or F.\n";
    }

    return 0;
}