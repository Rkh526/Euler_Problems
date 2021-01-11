#include <iostream>
#include <cmath>

using namespace std;

// This program takes in a natural number from
// the user and takes the difference btwn
// the sum of the squares and the square of the
// sum of all the numbers up to that one. 

int sumOfSquares(int maxNat){
  int theSum = 0;
  for(int i=1;i<=maxNat;i++){
    theSum = theSum + pow(i,2);
  }
  return theSum;
}

int squareOfSum(int maxNat){
  int theSquare = 0;
  for(int i=1;i<=maxNat;i++){
    theSquare = theSquare + i;
  }
  return pow(theSquare,2);
}

int main()
{
  int maxNat,sum,square = 0;
  cout << "Hey there what number do you want to "
       << "do the difference for?\n";
  cin >> maxNat;

  sum = sumOfSquares(maxNat);
  square = squareOfSum(maxNat);

  cout << "Here's the difference" << endl;
  cout << (square-sum) << endl;
  
  return 0;
}



