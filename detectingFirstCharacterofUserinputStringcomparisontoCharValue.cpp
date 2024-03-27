/*
*Here is an expresion to detect that the first character of the userInput string 
*matches the first letter of the character stored in the variable fristLetter.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string userInpt;
	char firstLetter;
	
	getline(cin, userInput);
	cin >> firstletter;
	
	if(userInput.at(0) == firstLetter){
		cout << "Found match: " << firstLetter << endl;
	}
	else{
		cout << "No match: " << firstLetter << endl;
	}
	
	return 0;
}