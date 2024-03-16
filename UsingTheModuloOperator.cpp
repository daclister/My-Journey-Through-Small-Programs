/*
he modulo operator (%) evaluates the remainder of the division of two integer operands. 
Ex: 23 % 10 is 3.

Examples:

24 % 10 is 4. Reason: 24 / 10 is 2 with remainder 4.
50 % 50 is 0. Reason: 50 / 50 is 1 with remainder 0.
1 % 2 is 1. Reason: 1 / 2 is 0 with remainder 1.
10 % 4.0 is not valid. "Remainder" only makes sense for integer operands.
*/

#include <iostream>
using namespace std;

int main(){
	int userMinutes; // user input: minutes
	int outHours;    // Output Hours
	int outMinutes;  // Output minutes (remaining)
	
	cout << "Enter minutes: ";
	cin >> userMinutes;
	
	outHours   = userMinutes / 60;
	outMinutes = userMinutes % 60;
	
	cout << userMinutes << " minutes is ";
	cout << outHours    << " hours and ";
	cout << outMinutes  << " minutes." << endl;
	
	return 0;
}
//Modulo has several useful applications. Below are just a few.
/*
*Given a random number randNum, % can generate a random number within a range:

-randNum % 10
-Yields 0 - 9: Possible remainders are 0, 1, ..., 8, 9. Remainder 10 is not possible: Ex: 19 % 10 is 9, but 20 % 10 is 0.
-randNum % 51
-Yields 0 - 50: Note that % 50 would yield 0 - 49.
-(randNum % 9) + 1
-Yields 1 - 9: The % 9 yields 9 possible values 0 - 8, so the + 1 yields 1 - 9.
-(randNum % 11) + 20
-Yields 20 - 30: The % 11 yields 11 possible values 0 - 10, so the + 20 yields 20 - 30.

*Given a number, % and / can be used to get each digit. For a 3-digit number userVal like 927:

-onesDigit     = userVal % 10;    // Ex: 927 % 10 is 7. 
-tmpVal        = userVal / 10;

-tensDigit     = tmpVal % 10;     // Ex: tmpVal = 927 / 10 is 92. Then 92 % 10 is 2.
-tmpVal        = tmpVal / 10;

-hundredsDigit = tmpVal % 10;     // Ex: tmpVal = 92 / 10 = 9. Then 9 % 10 is 9.

*Given a 10-digit phone number stored as an integer, % and / can be used to get any part, such as the prefix. For phoneNum = 1365551212 (whose prefix is 555):

-tmpVal = phoneNum / 10000; // / 10000 shifts right by 4, so 136555. 
-prefixNum = tmpVal % 1000; // % 1000 gets the right 3 digits, so 555.
-Dividing by a power of 10 shifts a value right. 321 / 10 is 32. 321 / 100 is 3.

% by a power of 10 gets the rightmost digits. 321 % 10 is 1. 321 % 100 is 21.
*/
