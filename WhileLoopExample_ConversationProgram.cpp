//Example conversation	
/*
*Below is a program that has a "conversation" with the user, asking the user to typ something and then (randomly)
*printing one of four possible responses until the user enters "Goodby".
*/

#include <iostream>
#include <string> //C++ dose not have a built in string function therfore you must import it using the string library.
using namespace std;

	/*
		*Program that has a conversation with the user.
		*Uses a if-else statements and a random number (sort of)
		*to mix up the program's responses.
	*/

int main() {
	int ranNum0_3; 			//Random number 0 to 3
	string userText;		//User input
	
	cout << "Tell me something about yourself." << endl;
	cout << "You can type \"Goodbye\" at anytime to quite." << endl << endl << "> ";
	
	getline(cin, userText);
	
	while (userText != "Goodye"){
		randNum0_3 = userText.size() % 4; // "Random" num. %4 ensures 0-3
		
		if (randNum0_3 == 0){
			cout << endl << "Please explain further." << endl << endl << "< ";
		}
		else if(randNum0_3 == 1) {
			cout << endl << "Why do you say: \"" << userText << "\?" << endl << endl << "> ";
		}
		else if(ranNum0_3 == 2){
			cout << endl << "I don't think that's right." << endl << endl << "> ";
		}
		else if (ranNum0_3 == 3){
			cout << endl << "What else can you share?" << endl << endl << "> ";
		}
		else{
			cout << endl << "Uh-oh, something went wrong. Try again." << endl << endl;
		}
		getline(cin, userText);
	}
	
	cout << endl << "It was nice talking with you. Goodbye." << endl;
	
	return 0;
	
}