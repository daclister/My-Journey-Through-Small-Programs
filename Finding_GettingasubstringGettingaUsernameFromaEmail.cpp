/*
*There are plenty useful string operations including functions for finding characters or strings, or getting a substring of a string
*
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
	string emailText;
	int atSymbolIndex;
	string emailUsername;
	
	cout << "Enter email address: ";
	cin >> emailText;
	
	atSymbolIndex = emailText.find('@');
	if(atSymbolIndex == string::npos){
		cout << "Address is missing  @" << endl;
	}
	else{
		emailUsername = emailText.substr(0, atSymbolIndex);
		cout << "Username: " << emailUsername << endl;
	}
	
	return 0;
}


//Some examples
/*
*find(): returns index of first item occurrence, esle returns string::npos(a constant defind in the string library
--userText is "Help me!"
*userText.find('p')    // Returns 3 the index location where the first p is found
*userText.find('e')    // Returns 1 (first occurrence of e only)
*userText.find('z')    // Returns string :: npos
*userText.find("me")   // Returns 5
*userText.find('e', 2) // Returns 6 (starts at index 2)
*/

/*
*substr(): returns a substring that starts at an index you pick  
*--// userText is "http://google.com"
*userText.substr(0, 7 )  // Returns "http://" 
*userText.substr(13, 4)  // Returns ".com"
*userText.substr(userText.size() - 4, 4) // Last 4: ".com"
*/ 

//This is a common case that gets the last four digits: userText.substr(userText.size() - 4, 4)