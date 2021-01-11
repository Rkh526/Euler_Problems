#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// This project is to find the largest prime
	// factor of a number. Not the full factor
	// list, just the largest. 
	long numIn=0;
	long largePrime=2;
	long origNumIn=0;

	cout << "Hi there, what number do you want "
		"to find the largest prime factor of?\n";
	cin >> numIn;
	origNumIn = numIn;

	while (numIn%2 == 0) {
		numIn = numIn/2;
	}

	for (long i=3;i<=sqrt(numIn);i=i+2){
		while (numIn%i == 0) {
			numIn = numIn/i;
			largePrime=i;
		}
	}

	if (numIn>2) {
		largePrime = numIn;
	}
	cout << "Well the largest prime factor of "
	     << origNumIn << " is " << largePrime 
	     << ". Bye!\n";

	return 0;
}
