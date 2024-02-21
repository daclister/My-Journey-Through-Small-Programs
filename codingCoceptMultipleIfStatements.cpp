#include <iostream>	
using namespace std;
/*here is a program that uses multiple distinct
*if statmenets this is usefull for when you want statements
* that can excute at the same time each if statement is distinct
*/

int main() {
	int userAge;

	cout << "Enter the age of the user.";
	cin >> userAge;// we dont need to get a whole line of text what we can do is just the number!

	//Note that more than one "if" statement can excute at the same time!!!

	if (userAge < 16) {
		cout << "Enjoy your early years!" << endl;

	}

	if (userAge > 15) {
		cout << "You are old enough to drive" << endl;
	}

	if (userAge > 17) {
		cout << "you are old enough to vote" << endl;
	}
	if (userAge > 24) {
		cout << "you are old enought that most rental companies will rent to you!" << endl;
	}
	if (userAge > 34) {
		cout << "you can now run for presdient haha look at you!" << endl;
	}
}