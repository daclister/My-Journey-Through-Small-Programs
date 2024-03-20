/*
*The *boolean data type* represents a quantity that has only two posible values also called a boolean.
*C++ has the built-in data type (bool) for representing boolean quantities.
* Boolean variable may be set using the true or false keywords
*Example" isMale = true;
*Assigns isMale with the Boolean value true.
*You can also set these values to a result of logical expresion
*Eaxample: isIverweight = (userBmi >= 25); assigns isOverweight with the result of the expression userBmi >= 25.
*Booleans always return either true or false
*/

//Variables of bool data type to calulate life expectancy
/*
*You can use boolean values to check conditions in if-else statements this is a powerfull tool for programmers.
*/
#include <iostream>
using namespace std;

int main(){
	double lifeExpectancy;
	double userBmi;
	char userChoice;
	bool isOverweight;
	bool isMale;
	
	//Get user's sex
	cout << "Pick one choice Female (f) or male (m): ";
	cin >> userChoice;
	if (userChoice == 'm') {
		isMale = true;
	}
	else{
		isMale = false; //Boolean value that evaluates to true if the use enters m for male
	}
	
	// Get user's BMI
	cout << "Enter body mass index (BMI) : ";
	cin >> userBmi;
	isOverweight = (userBmi >= 25);
	
	// Determine life expectancy based on sec and BMI
	if (isMale && isOverweight){
		lifeExpectancy = 79.4;
	}
	else if (!isMale && !isOverweight){
		lifeExpectancy = 83.5;
	}
	else {
		lifeExpectancy = 81.4;
	}
	
	cout << "Life expectancy is " << lifeEcpectancy << " years." << endl;
	
	return 0;
}