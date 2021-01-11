#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	// This project doesn't interact. It just 
	// gives the largest product of two 3 dig 
	// numbers that is a palindrome. 
	
	int largeVal, isPal, revPal, digit, num = 0;
  vector<int> pals;
	bool Pal = false;

		for (int i=999;i>=100;--i) {
			for (int j=999;j>=100;--j){
				isPal = i*j;
				num=isPal;

				do {
					digit=num%10;
					revPal=(revPal*10)+digit;
					num=num/10;
				}while(num!=0);
				if (isPal == revPal){
          pals.push_back(isPal);
				}
        revPal = 0;
			}
		}

    largeVal = *max_element(pals.begin(),pals.end());
    cout << largeVal << endl;


	return 0;
}

