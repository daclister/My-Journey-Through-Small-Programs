//Basic while loop example:	
/*
*The following program gets user input at the end of each iteration to determing if it needs to coninue looping
*/

#include <iostream>
using namespace std;

int main(){
	double celsiusValue;
	double fahrenheitValue;
	char userChar;
	
	celsisusValue = 0.0;
	userChar = 'y';
	
	while (userChar == 'y'){
		fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;
	}
	
	cout << celsiusValue << " C is ";
	cout << fahrenheitValue << " F" << endl;
	
	cout << "Type y to continue, any other to quit: ";
	cin >> userChar;
	
	celsisusValue = celsisusValue + 5;
	cout << endl;
	}
	
	cout << "Goodbye." << endl;
	
	return 0;
}