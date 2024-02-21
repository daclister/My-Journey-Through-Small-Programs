/*
*Reading an input string containg spaces using getline()
*In order to get an entire line in the program
*remember strings are not avilable normally you'll need to import the header
*file that allows use of the string library in c++
*/

#include <iosteam>
#include <string>
using namespace std;

int main(){
	//variables
	string firstName;
	string lastName;
	
	//user prompts
	cout << "Enter first name:" << endl;
	//the example of using getline in our application
	getline(cin, firstName); // gets the entire line up till ENTER
	
	cout << "Enter last name:" << endl;
	getline(cin, lastname); // Gets entire line up to ENTER
	
	cout << endl;
	cout << "Welcome " << firstName << " " << lastname << "!" << endl;
	cout << "May I call you " << firstName << "?" << endl;
	
	return 0;
}