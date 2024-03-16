/*
*A manipulator is a function that overloads the insertion operator << or extraction operator >> to adjust the way output appears.
*Manipulators are in the iomanip and ios libraries in namespace std.
*some manipulators help align text here is a program that dose just that
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
   //Dog age in human years (dogyears.com)
   cout << set(w) << left << "Dog age" << "|";
   cout << setw(12) << right << "Human age" << endl;
   
   // create a long line to seprate the text
   cout << setfill('-') << setw(23) << "" << endl;
   
   //Reset the fill character back to the space character
   cout << setfill(' ');
   
   //creates a table that seprates the information into to categories Dog age and human years
   cout << setw(10) << left << "2 months" << "|";
   cout << setw(12) << right << "14 months" << endl;
   cout << setw(10) << left << "6 months" << "|";
   cout << setw(12) << right << "5 years" << endl;
   cout << setw(10) << left << "8 months" << "|";
   cout << setw(12) << right << "9 years" << endl;
   cout << setw(10) << left << "1 year" << "|";
   cout << setw(12) << right << "15 years" << endl;
   
   //produces a long line
   cout << setfill('-') << setw(23) << "" << endl;
	
	return 0;
	
}
/*
The setw() manipulator sets the number of characters for displaying the following item to 10. The left manipulator outputs the following item "Dog age" left-aligned within 10 characters.
The vertical bar | is output at the end of the 10 characters. setw() only affects the "Dog age" output.
The setw() and right manipulators output "Human age" right-aligned within 12 characters.
The setfill() manipulator sets the dash character to fill the empty space created when outputting an empty string in the next 23 characters.
setfill(' ') sets the empty space character back to the default space character.
The dog age values are output left-aligned within 10 spaces, and the human age values are output right-aligned within 12 spaces.
One final line of 23 dashes is output.
*/