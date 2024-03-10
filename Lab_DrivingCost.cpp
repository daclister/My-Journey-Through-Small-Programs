/*
2.25 LAB: Driving costs
Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

20.0 3.1599
the output is:

3.16 11.85 79.00
Note: Real per-mile cost would also include maintenance and depreciation.
*/

#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   /* Type your code here. */
   double carMilesPerGallon;
   double costGasDollarsPerGal;
   
   carMilesPerGallon = 0;
   costGasDollarsPerGal = 0;
   cin >> carMilesPerGallon;
   cin >> costGasDollarsPerGal;
   
   cout << fixed << setprecision(2) << (20 / carMilesPerGallon) * costGasDollarsPerGal << " ";
   cout << setprecision(2) << ( 75 / carMilesPerGallon) * costGasDollarsPerGal << " ";
   cout << setprecision(2) << ( 500 / carMilesPerGallon) *  costGasDollarsPerGal << endl;
   return 0;
}