/*
*If we want to check for multiple conditions and see if they are all true or false and run
*each statement if it is true we can use multiple if statements in sucession
*/
//A program with Multiple distinct if statements.

#include<iostream>
using namespace std;

int main() {
	int userAge;
	cout << "Enter age: ";
	cin >> userAge;
	
	//Note that more than one "if" statement can execute
	if (userAge < 16) {
		cout << "Enjoy your early years."
	}
	if (userAge > 15) {
		cout << "You are old enough to drive." << endl;
	}
	if (userAge > 17) {
		cout << "You are old enough to vote. << endl;
	}
	if (userAge > 24) {
		cout << "most car rental companies will rent to you" << endl;
	}
	if (userAge > 34) {
		cout << "You can run for president." << endl;
	}
	
	return 0;
}
/*
*In this program multiple if statements can execute giving you the effect of each condition running
*if each check is satisfied
*/