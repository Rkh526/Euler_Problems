#include <iostream>

using namespace std;

int main()
{
  // This program finds the smallest number that
  // is evenly divisible by all the whole numbers
  // from 1 to 20. I don't need to check 1 and I
  // know the smallest for 1 to 10 is 2520.
  // Also it will have to be even because of 
  // how math works.
  
  int smallMul = 2520;
  int smallMulReal = 0;
  bool isMult = false;

  do {
    int i=2;
    do {
      if (i==20){
        smallMulReal = smallMul;
        isMult = true;
      }
      i++;
    }while(smallMul%i==0 && i<=20);
    if (isMult) {
      cout << smallMulReal << endl;
    }
    else {
      smallMul = smallMul + 2;
    }
  }while(!isMult);
  
  return 0;
}
      
