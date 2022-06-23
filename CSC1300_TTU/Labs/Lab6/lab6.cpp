/*******************************************************************
File Name:
Name:
Date:
Purpose:

********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;
string name;
double shirts;
double cost;
double finalCost;
double costShirt = 19.99;
double discount = 0;
int main()
{
    cout <<	setprecision(2) << fixed << showpoint;

    cout << "Welcome to the Grrek Life store!\n";
    cout << endl;
    cout << "What is your Name? ";
    getline (cin , name);
    cout << endl;


    cout << "All shirts are $19.99.\n";
    cout << "We offer quantity discounts as follows:\n";
    cout << setw(5)<<" "<<"Number of Shirts     Discount\n"; //29 spaces
    cout << setw(5)<<" "<<"5-10"<<setw(21)<<"10%\n";
    cout << setw(5)<<" "<<"11-20"<<setw(20)<<"15%\n";
    cout << setw(5)<<" "<<"21-30"<<setw(20)<<"20%\n";
    cout << setw(5)<<" "<<"31-Or More"<<setw(15)<<"25%\n";
    cout << endl;


    cout << name << ", how many shirts would you like to order? ";
    cin >> shirts;
    cin.ignore();
    cout << endl;
        if (shirts != 1 && shirts <= 100000){
            cout << "Invalid input:  Please run the program again and enter a valid input\n";
        }
    if (shirts <= 1 && cost <=  4){
        cost = costShirt * shirts;
        discount = 0;
        finalCost = cost + (cost * 0.0975);
    }
    else if (shirts <= 5 && cost <= 10){
        discount = costShirt * 0.10;
        cost = (costShirt - discount) * shirts;
        finalCost = cost + (cost * 0.0975);
    }
    else if (shirts <= 11 && shirts <= 20){
        discount = costShirt * 0.15;
        cost = (costShirt - discount) * shirts;
        finalCost = cost + (cost * 0.0975);
    }
    else if (shirts <= 21 && shirts <= 30){
        discount = costShirt * 0.20;
        cost = (costShirt - discount) * shirts;
        finalCost = cost + (cost * 0.0975);
    }
    else if (shirts <= 31 && shirts <= 100000){
        discount = costShirt * 0.25;
        cost = (costShirt - discount) * shirts;
        finalCost = cost + (cost * 0.0975);
    }

    cout << "------------------------------"<<"\n";
    cout << "Bill For " << setw(10) <<" "<< name << endl;
    cout << "Discounted Cost: "<< setw(6)<<" " <<"$"<<discount<< endl;
    cout << "Total Cost: "<<setw(10)<< " "<<"$"<<finalCost<< endl;

return 0;
}