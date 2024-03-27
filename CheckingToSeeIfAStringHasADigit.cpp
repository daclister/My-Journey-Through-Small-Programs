/*
*A small c++ program that sets the variable hasDigit to true if the 3-character passCode contains a digit
*We us an if statement and logical operators in order to test for the condition if a character in a string is a digit
*We use the .at() function to select a character in a string and check its value.
*/

int main(){
	bool hasDigit; //boolean value either returns true or false
	string passCode;
	
	hasDigit = false; // the intial state of our has digit variable
	cin >> passCode;
	
	if(isdigit(passCode.at(0)) || isdigit(passCode.at(1)) || isdigit(passCode.at(2)) ){
		hasDigit = true;
	}
	if (hasDigit){
		cout << "Has a digit." << endl;
	}
	else {
		cout << "Has no digit." << endl;
	}
	
}