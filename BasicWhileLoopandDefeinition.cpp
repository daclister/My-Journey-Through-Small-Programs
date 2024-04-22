//While loops
//is a programming construct that repeatedly executes a list of sub-statements (known as a loop body)
//The loop will continue to run as long as the condition is true.
//each pass through the loop is called a iteration.

while (expression) {//loop expression
	//loop body: Executes if expression evaluated to true
	//After body, execution jumps back to the "while"	
}

//statemetns that execute after the expression has evaluated to false.

/*
*A basic while loop program.
*/

#include <iostream>
using namespace std;

int main(){
	int  currPower;
	char userChar;
	
	currPower = 2;
	userChar = 'y';
	//When encountered, a while loop's expression is evaluted. If true, the loop's body is entered. Here, userChar was initialized with 'y', so userChar =='y' is true.
	while (userChar == 'y'){
		cout << currPower << endl;
		currPower = currPower * 2;
		cin >> userChar;
	}
	
	cout << "Done" << endl;
	
	return 0;
}