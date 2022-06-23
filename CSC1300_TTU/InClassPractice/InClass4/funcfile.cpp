/* 

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool luckyguess(int);

int main()
{
	string name, food;
	ofstream outFile;
	int num;
	int randNum;

	srand(time(0));
	
	cout << "\n\nWhat is your full name?  ";
	getline(cin, name);
	cout << "What is your favorite food?  ";
	getline(cin, food);
	cout << "What is your favorite number?  ";
	cin >> num;

	outFile.open("result.txt");

	if(luckyguess(num) == true)
	{
		outFile << name << ", you will get a lifetime supply of ";
		outFile << food << "!\n";
	}
	else
	{
		outFile << name << ", sorry, you get no " << food <<".\n";
	}
	outFile.close();
	
	return 0;
}

bool luckyguess(int num)
{
	bool status;
	int randNum;
	int low = 1;
	int high = 100;

	randNum = low + rand() % (high - low + 1);

	if (randNum >= (num - 25) || randNum <= (num + 25))
	{
		status = true;
	}
	else 
	{
		status = false;
	}

	return status;
}












