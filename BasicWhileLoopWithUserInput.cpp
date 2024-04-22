//Basic while loop with user input.
/*
*An expression that executes the loop while the user enters a number greater than 0!
*/

#include <iostream>
using namespace std;

int main(){
	int userNum;
	
	cin >> userNum;
	
	while (userNum >= 0){
		cout << "Body" << endl;
		cin >> userNum;
	}
	
	cout << "Done." << endl;
}