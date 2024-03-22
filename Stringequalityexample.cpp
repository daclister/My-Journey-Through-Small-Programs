/*
*You might need to compare two strings as a program or even more likely oversee code that is comparing two strings.
*A comparison begins at index 0 and compares each character until the evaluation results in false, or the end of a string is reached. 'A' is 65, 'B' is 66, etc.
*while 'a' is 97, 'b' is 98, etc. 
*So "Apples" is less than "apples" because 65 is less than 97.
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
	string userWord;
	
	cout << "Enter a word: ";
	cin >> userWord;
	
	if (userWord == "USA"){
		cout << "Murica!!!!!";
	}else{
		cout << userWord; 
		}
	cout << endl;
}
/*
A programmer compares strings relationally using the relational operators <, <=, >, and >=.
*A common error is to forget that case matters in a string comparison.
*A programmer can compare strings while ignoring case.
*By first converting both strings to lowercase before comparing.
*/