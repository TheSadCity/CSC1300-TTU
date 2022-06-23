#include <iostream>
using namespace std;

int main () {
   int hourlyWage;
   
   hourlyWage = 20;

   cout << "Annual salary is: ";
   cout << hourlyWage * 40 * 52; // roughly 52 weeks in 1 year
   cout << endl;

   cout << "Monthly salary is: ";
   cout << (hourlyWage * 40 * 4); // roughly 4 weeks in one month
   cout << endl;
   // FIXME: The above is wrong. Change the 1 so the statement outputs monthly salary.

   return 0;
}