/*
*Sometimes you just need to convert from one data type to another this is called type conversion
*need to divide two integer numbers but return a floating point number use type conversion on one of the numbers.
*The computer progam will do some basic converting for you such as dividing an int/double the type will be converted to a double
*This is implicit conversion.
*If you do not do this your anwser will be truncated(meaning shortend)
*a (type cast) explicity converts a value of one type to another.
* you will need to use the static_cast operator to do this.
*The static_cast operator ( static_cast<type>(expression)) converts the expression's value to the indicated type. 
*Ex: If myIntVar is 7, then static_cast<double>(myIntVar) 
*converts int 7 to double 7.0.
*/

#include <iostream>
using namespace std;

int main(){
	int kidsInFamily1;      //You cant have a fraction of a kid so this value should be an integer use integer type when dealing with countable items and floating-point type when dealing with measurments
	int kidsInFamily2;
	int numFamilies;
	
	double avgKidsPerFamily; //expect a fraction here
	
	kidsInFamily1 = 3;
	kidsInFamily2 = 4;
	numFamilies = 2;
	
	avgKidsPerFamily = static_cast<double>(kidsInFamily1 + kidsInFamily2) / static_cast<double>(numFamilies);
	
	cout << "Average kids per family: " << avgKidsPerFamily << endl;
	
	return 0;
}

//Avoid this common error
//examAvg = static_cast<double>((midtermScore + finalScore) / 2);
//Common error: Casting the result of integer division 
//does not perform the desired floating-point division