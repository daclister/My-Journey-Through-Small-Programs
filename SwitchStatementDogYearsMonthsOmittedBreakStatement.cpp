/*
*You can omitt the break statement for a case that runn all the cases unitl the break creating a fall through effect.
*This
*/

#include <iostream>
using namespace std;

/*
*Estimates dog's age in equivalent human years.
*Source: www.dogyears.com
*/

int main() {
	int dogAgeYears;
	int dogAgeMonths;

	cout << "Enter dog's age (in years) Enter 0 if dog is under 1 year: ";
	cin >> dogAgeYears; // quick why no endl statement here well cin will create its own newline character

	while (dogAgeYears < 0) {
		cout << "invalid input re-enter number: ";
		cin >> dogAgeYears;
	}

	if (dogAgeYears == 0) {
		cout << "Enter dog's age in months: ";
		cin >> dogAgeMonths;

		switch (dogAgeMonths) {// since our break is on a later line all the cases before it will execute
		case 0:
		case 1:
		case 2:
			cout << "Tha's 0 to 14 human months." << endl;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			cout << "That's 1 to 5 human years." << endl;
			break;
		case 7:
		case 8:
			cout << "That's 5 to 9 human years." << endl;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			cout << "That's 9 to 15 human years." << endl;
			break;
		default:
			cout << "incalid input." << endl;
			break;
		}
	}
	else {
		switch (dogAgeYears) { //variable you will be comparing to constant values
		case 0:
			cout << "That's 0 to 14 human years." << endl;
			break;
		case 1:
			cout << "That's 15 human years." << endl;
			break;
		case 2:
			cout << "That's 24 human years." << endl;
			break;
		case 3:
			cout << "That's 28 human years." << endl;
			break;
		case 4:
			cout << "That's 28 human years." << endl;
			break;
		case 5:
			cout << "that's 37 human years." << endl;
			break;
		case 6:
			cout << "That's 42 human years." << endl;
			break;

		case 7:
			cout << "Thats 47 human years." << endl;
			break;

		case 8:
			cout << "That's 52 human years." << endl;
			break;

		case 9:
			cout << "That's 57 human years." << endl;
			break;

		case 10:
			cout << "That's 62 human years." << endl;
			break;
		default:
			cout << "That's 37 human years." << endl;
			break;
		}
	}

	return  0;
}
//A common error occurs when the programmer forgets to include a break statement at the end of a case's statements.
