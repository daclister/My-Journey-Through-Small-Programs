#include <iostream>
#include<string> // supports use of "string" data type
using namespace std;

/*
*This program is a game inspired by "Mad Libs" where users
*enters nouns, verbs, etc., and then a story using those words is ouput.
*/

int main() {
	//declaring our variables for later use in the program
	string wordRelative;
	string wordFood;
	string wordAdjective;
	string wordTimePeriod;
	
	//Get user's words
	cout << "Type iput without spaces." << endl;
	
	cout << "Enter a kind of relative: " << endl;
	cin >> wordRelative;
	
	cout << "Enter a kind of food: " << endl;
	cin >> wordFood;
	
	cout << "Enter an adjective: " << endl;
	cin >> wordAdjective;
	
	cout << "Enter a time period: " << endl;
	cin >> wordTimePeriod;
	
	// now using this information we tell the user a story!!
	cout << endl;
	cout << "My " << wordRelative << " says eating " << wordFood << endl;
	cout << "will make me more " << wordAdjective << "," << endl;
	cout << "so now I eat it every " << wordTimePeriod << "." << endl;
	
	return 0;
	

	
}