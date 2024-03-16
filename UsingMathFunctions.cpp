/*
*Using a math funciton in c++
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
   double sideSquare; // declared variable
   double areaSquare = 49.0; // intialized variable
   
   sideAquare = sqrt(areaSquare); //sqrt function call(invokes the sqrt function in the cmath library) with an argument
   
   cout << "Square root of " << areaSquare << " is " << sideAquare << endl;
   
   return 0;
	
}