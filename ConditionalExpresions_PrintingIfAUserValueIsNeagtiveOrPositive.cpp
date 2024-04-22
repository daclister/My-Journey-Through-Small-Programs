//using condition expresion with tenary operators to Print  if a userValue is negative or positive_sign

#include <iostream>
#include <string>
using namespace std;
int main(){
	string condStr;
	int userVal;
	
	cin >> userVal;
	
	condStr = (userVal < 0) ?/*Tenary operator*/ "negative" : "non-negative";
	
	cout << userVal << " is " << condStr << "." << endl;
	
	return 0;
	
}