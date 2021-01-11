#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// This program finds the prime number the user
// asks for by taking the place eg 3rd prime = 5

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
  long counter = 2;
  long primeVal = 3;

  cout << "Which numbered prime would you like?\n";
  cin >> primePlace;


  if (primePlace==1){
    cout << "The first prime value is 2!\n";
    return 0;
  }

  do {
    
    if (isPrime(primeVal)){
      counter++;
    }
    primeVal = primeVal + 2;
    
  }while(counter <= primePlace);

  cout << "The " << primePlace << " st/th prime is"
       << " " << (primeVal -2) << endl;
  return 0;
}


