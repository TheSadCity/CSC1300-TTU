#include <fstream>
#include <cstdlib>
#include <cmath>
#include "Primes.h"
using namespace std;

int lower;
int upper;

bool isPrime (int num)
{
	int count = 0;
	if (num < 2) 
		return false;
	if (num == 2) 
		return true;
	
	int sqrtNum = ceil(sqrt(num));
	for (int i = 2; i <= sqrtNum; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}

void findPrimes(int lower, int upper, const char fileName[]){

    ofstream outFile;
    outFile.open(fileName);
    outFile << "Below are the prime numbers between " << lower << " and " << upper << endl;
    for(int i = lower; i <= upper; i ++){
        
        if (isPrime(i)){
            outFile << i << endl;
        }
        outFile.close();
    }

}