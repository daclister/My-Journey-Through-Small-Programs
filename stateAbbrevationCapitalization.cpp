/*
*the cctype library via #include <cctype> provides access to several functions for working with characters
*check the docs for functions you can use
*Checks the characters inserted for states it they are both letters then will make sure the letters are captialized.
*/

#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char let0;
	char let1;
	
	cout << "Enter a two-letter state abbreviation: " ;
	cin >> let0;
	cin >> let1;
	
	if( ! (isalpha(let0) && isalpha(let1)) ){
		cout << "Error: Both are not letters." << endl;
	}
	else {
		let0 = toupper(let0);
		let1 = toupper (let1);
		cout << "Capitalized: " << let0 << let1 << endl;
	}
	
	return 0;
}
/*
*character functions
*isalpha(c): truie if alpabetic a-z or A-Z
*isdigit(c): true if digit: 0-9
*isspace(c): true if whitespace
*toupper(c): Uppercase Version returned //Dose not change the string
*tolower(c): Lowercase version returned //Dose not change the string
*/