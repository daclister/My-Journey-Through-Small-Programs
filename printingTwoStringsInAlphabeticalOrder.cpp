/*
Print the two strings, firstString and secondString, in alphabetical order. Assume the strings are lowercase. End with newline. Sample output:
capes rabbits
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   /* Since the ascII value of letters has A being less than Z you only need to check if one letter is greater than the other! */
if (firstString < secondString){ // if your firstString has less characters in it the it is automatically above the second string 
   cout << firstString << " " << secondString << endl; //the smaller value will be the higer order alpahbetical character 
   }else{
      cout << secondString << " " << firstString << endl;
      }
   return 0;
}
/*
A programmer compares strings relationally using the relational operators <, <=, >, and >=.
*A common error is to forget that case matters in a string comparison.
*A programmer can compare strings while ignoring case.
*By first converting both strings to lowercase before comparing.
*/