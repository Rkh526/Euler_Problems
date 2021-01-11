#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// This program gives the sum of all primes
// up to a number

vector<long> primeArr;

bool isPrime(int testNum){
  // check for prime and return if it is
  for (int i=2; i<=sqrt(testNum);i++){
    if (testNum%i==0){
      return false;
    }
  }
  return true;
}

int main()
{
  long primePlace = 1;
  bool primeCheck = false;
  long counter = 1;
  long primeVal = 3;
  long primeSum = 2;

  cout << "Which numbered prime would you like?\n";
  cin >> primePlace;


  if (primePlace==1){
    cout << "The first prime value is 2!\n";
    return 0;
  }

  do {
    
    if (isPrime(primeVal)){
      primeSum = primeSum+primeVal;
    }
    primeVal = primeVal + 2;
    counter++;
    
  }while(primeVal<= primePlace);

  cout << "The " << primePlace << " st/th sum of primes is"
       << " " << (primeSum) << endl;
  return 0;
}


