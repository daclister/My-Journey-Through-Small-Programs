/*
*Boolean data types help simplify complex expresions. An expression 
*can be simplified by assing your boolean variable with the results of an expression
*that uses relantional operators. Then your if-else statement can now only consist of logical operator using the variable declared earlier
*below is an example of this for clarity.
*/
#include <iostream>
using namespace std;
// Using Boolean variables to simplify expressions.
int main(){
   bool isHot = (currentTemp > desiredTemp);
   bool isReallyHot = (currentTemp > (desiredTemp + 5.0));
   bool isHumid = (currentHumidity > 0.50);
   
   if (isReallyHot){ // our variable is of boolean type we can check for this value being true if you wanna check for more than one condition then you will need logical operators.
      // Use A/C and ecpaorative cooler
   acOn = true;
	}
	else if (isHot && isHumid){
		// Use A/C and evaporative cooler
		acOn = true;
		evapCoolerOn = true;
	}
	else if (isHot && !isHumid){
		// Use evaporative cooler
		acOn = false;
		evapCoolerOn = true;
	}
	else {
		acOn = false;
		evapCoolerOn = false;
	}
}