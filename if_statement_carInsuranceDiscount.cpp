/*
// Statements that execute before the branches

if (expression "our condition we are testing for") {
   // Statements that execute when expression is true (first branch)
}
else {
   // Statements that execute when expression is false (second branch)
}

// Statements that execute after the branches
*/
//program that tells the user if their Car insurance price
#include <iostream>
using namespace std;

int main() {
	int userAge;
	int insurancePrice;
	
	cout << "Enter age: ";
	cin >> userAge;
	
	if (userAge < 25) {
		insurancePrice = 4800;
	}
	else{
		insurancePrice = 2200;
	}
	
	cout << "Annual price: $";
	cout << insurancePrice << endl;
	
}
//Caption
/*
An if-else statement executes a group of statements if an expression is true, and executes another group of statements otherwise.
userAge is 22, so the expression 22 < 25 is true, and the if's statements will execute.
user's age is 40, so the expression 40 < 25 is false, and the else's statements will execute.
*/