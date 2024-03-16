/*
*Using a math funciton in c++
Some math functions for integers are in a library named cstdlib, requiring: #include <cstdlib>
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
   double initMass; // Initial mass of a substance
   double growthRate; // Annual growth rate 
   double yearsGrow; // years of growth
   double finalMass; // final mass after years
   
   cout << "Enter intial mass: ";
   cin >> initMass;
   
   cout << "Enter frowth rate (Ex. 0.05 is 5%/year) : ";
   cin >> growthRate
   
   cout << "Enter years of growth: ";
   cin >> yearsGrow;
   
   finalMass = initMass * pow(1.0 + growthRate, yearsGrow);
   //Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow
   
   cout << "Final mass after " << yearsGrow << " Years is: " << finalMass << endl;
   
   return 0;
	
}