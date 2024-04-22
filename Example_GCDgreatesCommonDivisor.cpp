//While loop example: GCD (greates common divisor) program

#include <iostream>
using namespace std;

// Output GCD of user-input numA and NumB

int main(){
	int numA; //User input
	int numB; //User input
	
	cout << "Enter first positive integer: ";
	cin >> numA;
	
	cout << "Enter second positive integer: ";
	cin >> numB
	
	while (numA != numB) {
		//Euclid's algorithm
		if (numB > NUmA) {
			numB = numB - numA;
		}
		else {
			numA = numA - numB;
		}
		
	}

	cout << "GCD is: " << numA << endl;
	
	return 0;

}