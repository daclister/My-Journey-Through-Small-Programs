/*
*A simple program that delcares and assigns a string in c++
*remember c++ dose not have A string data type built in the standard library
*you will need to import the library that contains the string library
*using this function #include <string>
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	//The string type will only be avialbe after adding the #include
	string sentenceSubject;
	string sentenceVerb;
	string sentenceObject = "an apple";
	
	sentenceSubject = "boy";
	sentenceVerb = "ate";
	
	cout << "A ";
	cout << sentenceSubject << " ";
	cout << sentenceVerb << " ";
	cout << sentenceObject << "." << endl; // endl is only acessible if you use the name space library else it will not work
	
	return 0;
}