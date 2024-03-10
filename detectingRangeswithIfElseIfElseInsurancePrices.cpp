/*
*You can build a computer program that detects numbers ranges such as 0-19 with the 19 being inclusive(means its apart of it).
*You can use the sequential nature of the multi-branch if-else arrangement to detect ranges of numbers.
*Here is a program that uses the sequntial nature of multi-branch if-else if-if statements for ranges of insurance prices.
*/

#include <iostream>
using namespace std; // Don't forget you actually don't have to include the namespace library.

int main(){
	int userAge;
	int insurancePrice;
	
	cout << "Enter your age: ";
	cin >> userAge;
	
	if (userAge < 16) //detecting the number range -infinty till 15
	{
		cout << "Too young." << endl;
	}
	else if (userAge < 25) //detecting the number range 16 to 24
	{
		insurancePrice = 4800;
	}
	else if (userAge < 40) //detecting the number range 25 to 39
	{
		insurancePrice = 2350;
	}
	else // detecting the number range 40+
	{
		insurancePrice = 2100;
	}
	
	cout << "Annual price: $" << insurancePrice << endl;
	
	return 0;
}
