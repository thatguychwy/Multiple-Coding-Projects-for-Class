/*Homework 19
Program Name: Coin Flip v0.1
Purpose: This program mimics a coin flip.
Author: Craig Arceneaux
Copyright © 2018 Personal. All rights reserved.
Development: 6 NOV 2018*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

int NUM_FLIPS;
int num;

int coin(){
  int flip;
  	flip=  rand() % 2 + 1;// assign random numbers
  				if (flip == 1)
  				cout << num << ":     Heads!" << endl;
  				else
  				cout << num << ":     Tails!" <<endl;
  				//end if
  	return (flip);
  }

int main() {
  system("clear");
  while(1){
    cout << "\tWelcome to Coin Flip!" << endl << endl;
    cout << "\tHow many tosses should I make?:";
    cin>>NUM_FLIPS;


 	  int count, heads=0, tails=0 , face;

 	  // initialize the random number generator
      srand(static_cast<int>(time(0)));

      // generate and count the number of heads and tails
 	    for (int count=1; count <= NUM_FLIPS; count++)
        {
          num = count;
          face = coin();
 		      if (face == 1)
              heads++;
              else
              tails++;
        }
        cout << "" << endl;
        cout << "The number flips: " << NUM_FLIPS << endl;
        cout << "The number of heads: " << heads <<  endl;
        cout << "The number of tails: " << tails <<  endl <<  endl <<  endl <<  endl;
  }
  return 0;
}
