//While loop example: Ancestors pronting program.

/*
*This program asks the user to input a year and the it outputs the approximate 
*number of a person's ancestors who where alive for each genration leading back to that year.
*with the loop computing powers of 2 through each iteration
*/

#include <iostream>
using namespace std;

int main (){
	const int YEARS_PER_GEN = 20; 	// Approx. years per generation
	int userYear;					// user input
	int consYear;					// Year being considered
	int numAnc;						// Aprrox. ancestors in considered year
	
	consYear = 2020;
	numAnc = 2;
	
	cout << "Ennter a past year (neg. for B.C.): ";
	cin >> userYear;
	
	while (consYear >= userYear){
		cout << "Ancestors in " << consYear << ": " << numAnc << endl;
		
		numAnc = 2 * numAnc;					// Each ancestor had two parents
		consYear = consYear - YEARS_PER_GEN;	// Go back 1 generation
	}
	
	return 0;
}