/*
*You might need to compare two strings as a program or even more likely oversee code that is comparing two strings.
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