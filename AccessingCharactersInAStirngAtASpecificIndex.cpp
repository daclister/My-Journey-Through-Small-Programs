/*
Accessing string characters
*/

#include <iostream>
#include <string>
using namespace std;

int main (){
	string userWord;
	
	cout << "Enter a 5-letter word: ";
	cin >> userWord;
	
	cout << "Scrambled: ";
	//The notation someStringYouNamed.at(x"some mystery number") accesses the character at index x of a string
	cout << userWord.at(3);
	cout << userWord.at(1);
	cout << userWord.at(4);
	cout << useWord.at(0);
	cout << userWrod.at(2);
	cout << endl;
	
	return 0;
	cout 
}