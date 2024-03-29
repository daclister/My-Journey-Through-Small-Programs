/*
//Floating-point comparision should be avoided do not compare floating points using ==.
//Some floating point numbers cannont be exactly represented in the limited available memory bits like 64.

double numMeters = 0.7;
numMeters = numMeters - 0.4;
numMeters = numMeters - 0.3;

//numMeters expected to be 0,
//but it is actually 0.0000000000000000555112

if (fabs(numMeters - 0.0) < 0.001){
	// Equals 0.
}else{
	//Dose not equal 0.
}

//Floating-point numbers can't always be exactly represented in limited memory bits.
if (numMeters == 0.0) {
   // Equals 0.
}
else {
   // Does not equal 0.
}
Thus, floats should not be compared with ==.
Compare floats for 'close enough'
Floating-point numbers should be compared for "close enough" rather than exact equality.
*/

//An epsilon is the value that you use to check if your comparsion is close enough 0.0001 is a common choice
//for examples if (x - y) < 0.0001, x and y are deemed equal because they are close enough!

//--The std::abs() function is overloaded to support floating-point and integer types. However, good practice is to use the fabs() function to make the operation clear.<--
//Bad practice is to compare a floating-point with an integer 

//Example of comparing floating-point numbers for equality: Body temperature.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double bodyTemp;
   
   cout << "Enter body temperature in fahrenheit: ";
   cin >> bodyTemp;
   
   if (fabs(bodyTemp - 98.6) < 0.0001) { //our epislon
      cout << "Tempreature is exactly normal." << endl;
   }
   else if(bodyTemp > 98.6){
      cout << "Tempreature is above normal." << endl;
   }
   else {
	   cout << "Tempreature is below normal." << endl;
   }
   
   return 0;
}
/*

What is output if the user enters 98.6000001? output: Exactly normal
98.6000001 - 98.6 is 0.0000001, which is less than 0.0001.
The comparison for "close enough" isn't a perfect approach.
If the programmer really wants to detect such small differences, the programmer would use a smaller epsilon, like 0.000000001.
*/

