/*
*A program that assigns the userInput string's length as the 
*value for the stringSize variable
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string userInput;
	int stringSize;
	
	getline(cin, userInput);
	
	stringSize = userInput.size();
	cout << "Size of userinput: " << stringSize << endl;
	
	return 0;
}