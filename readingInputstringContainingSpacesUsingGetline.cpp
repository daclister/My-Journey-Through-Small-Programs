/*
*Sometimes you wich to get white space characters into a string(characters in a sequence) such as the input of a name
*for such a case use the function getline(cin, yourStringVariablesName) it gets all
*the remaing text on the current input line, up to the next newline character! (this is removed from input but not put into your string)
*/

#include <iostream>
#include <string> // remember c++ has no native string functions you must import them from the library
using namespace std;

int main(){
   string firstName;
   string lastName;
   
   cout << "Enter first name:" << endl;
   getline(cin, firstName); // Gets entire line up to ENTER
   
   cout << "Enter last name:" << endl;
   getline(cin, lastName); // gets entire line up to ENTER
   
   cout << "Enter last name:" << endl;
   getline(cin, lastName); // gets entire line up to ENTER
   
   cout << endl;
   cout << "Welcome " << firstName << " " << lastName << "!" << endl;
   cout << "May I call you " << firstName << " " << lastName << "?" << endl;
   
   return 0;
}

/*
Keep in mind Mixing cin >> and getline() can be tricky,
because cin >> leaves the newline in the input, while getline() does not skip leading whitespace.
*/