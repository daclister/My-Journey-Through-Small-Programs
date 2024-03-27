/*
*There are more functions for modifying stringg.
String modification includes invoking a function with arguments.
*push_back(yourCharacter): adds a character to the end of a string
*insert(): insert(indexNumber, yourSubString, ): at the index number you specify a sub string of your choice will be inserted there starting at that index location
*replace(): replace(indx, num(the length of characters you want changed), subStr): this will replace the charcters for index strat you chose, to the amount of character you specify, with a specific sub string you specify
*str1 + str2: Returns a new string that is a copy of string 1 with string to appended at the end. You can add a character to a string or a string to a character as long ass one of these is a string!
*/

//String modify example: Greeting.

#include<iostream>
#include<string>
using namespace std;

int main(){
	string userName;
	string greetingText;
	int itemIndex;
	
	cout << "Enter name: ";
	getline (cin, userName);
	
	// Combine string using +
	greetingText = "Hellp" + userName;
	
	//Append a period (could have used + if you wanted to )
	greetingText.push_back('.'); // " '' not "" you appended a character!
	cout << greetingText << endl;
	
	//Insert Mr.Ms before user's name
	greetingText.insert(6, "Mr/Ms ");
	cout << greetingText << endl;
	
	//Replace occurrence of "Darn" by "@$#"
	if (greetingText.find"Darn") != string::npos) {
		//found
		itemIndex = static_cast<int>(greetingText.find("darn"));
		greetingText.replace(itemIndex, 4, @$#);
	}
	
	cout << greetingText << endl;
	
}