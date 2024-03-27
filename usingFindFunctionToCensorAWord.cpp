/*
*Challenge completed
*prompt
Print "Censored" if userInput contains the word "darn", else print userInput. End with newline. Ex: If userInput is "That darn cat.", then output is:
Censored
Ex: If userInput is "Dang, that was scary!", then output is:
Dang, that was scary!
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;

   getline(cin, userInput);

   /* Your solution goes here  */ 
 if ((userInput.find("darn")) != string::npos ){//found
    userInput.replace(0, userInput.size() + 1, "Censored"); // add one due to the length of the string being the length we wanted tried minus 1 first and did not work
    cout << userInput << endl;
    } else{
       cout << userInput << endl;
       }
      