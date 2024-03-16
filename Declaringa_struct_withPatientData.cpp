/*
*A program that declares a struct type variable that contains two integer data members
*we are given the patient  data and enter it ourselves in the program
*Build upon idea: expanded this program to accept inputs from a user.
*/

struct PatientData{
   int heightInches;
   int weightPounds;
}; // Yes you do need the semicolon at the end if this isn't here you will get an syntax error!

#include <iostream>
using namespace std;

int main() {
	PatientData lunaLovegood; // declaring a variable with the struct name data type
	
	lunaLovegood.heightInches = 63;
	lunaLovegood.weightPounds = 115;
	
	cout << "Patient data: " << lunaLovegood.heightInches <<  " in," << lunaLovegood.weightPounds << " lbs" << endl;
	
	return 0;
}