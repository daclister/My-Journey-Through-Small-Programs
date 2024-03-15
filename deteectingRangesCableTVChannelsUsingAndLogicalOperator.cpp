/*
* Detecting ranges: Cable TV channels. using the logical operator AND(&&)
*You can use logical operators to detect number ranges, if a condition is TRUE or FALSE, and the truth value of expressions
*Some basic logical operators are AND, OR, NOT.
*Logical AND (&&): true when both of its operands are true. Example(a && b) 
*Logical OR (||): true when at least one of its two operands is true Example (a || b)
*Logical NOT (!): true when its one operand is false, and vice-versa. Example ( !a )
*/
#include <iostream>
using namespace std;

int main(){
	int userChannel;
	char channelType;
	
	cin >> channelType;
	
   if ( (userChannel >= 2) && (userChannel <= 499) ){
	   channelType = 's';
   }
   else if ( (userChannel >= 1002) && (userChannel <= 1499) ){
	   channelType = 'h';
   }
   else{
	   channelType = 'e';
   }

   cout << "Channel type: " << channelType << endl;
   
   return 0;
}