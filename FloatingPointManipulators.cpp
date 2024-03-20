/*
*A manipulator is a function that overloads the insertion operator << or extraction operator >> to adjust the way output appears.
*Manipulators are in the iomanip and ios libraries in namespace std.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double miles = 765.4261;
	
	cout << "setprecision(p) sets # of digits" << endl;
	cout << miles << " "default precision is 6)" << endl;
	cout << setprecision(8) << miles << " (p = 8)" << endl;
	cout << setprecision(5) << miles << " (p = 5)" << endl;
	cout << setprecision(2) << miles << " (p = 2)" << endl;
	cout << miles << endl;
	
	// fixed uses fixed point notation
	cout << fixed;
	cout << "fixed: " << miles << endl;
	
	// scientific uses scientific notation contain e for 10^
	cout << scientific;
	cout << "scientific: " << miles << endl;
	
	return 0;
	
}
