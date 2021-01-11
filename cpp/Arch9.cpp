#include <iostream>

using namespace std;

// This program will find the product of the 3 
// natural numbers that sum to 1000 and are also
// a pythagorean triple. 

bool isPythTrip(int a,int b,int c) {
  if (((a*a)+(b*b))==(c*c)){ // is trip
    return true;
  } else {
    return false;
  }
}


int main(){

  bool isTrip=false;

  // cycle through three values to see if triple
  for (int a=1;a<998;a++){
    for (int b=1;b<998;b++){
      for (int c=1;c<998;c++){
        if ((a+b+c)==1000) {
          isTrip = isPythTrip(a,b,c);
          if (isTrip){
            cout << "the product is " << a*b*c << endl;
          }
        }
      }
    }
  }
  return 0;
}
