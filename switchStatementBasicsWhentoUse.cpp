/*
*You may need to more clearly represent multi-branch behavior that involves a variable being compared to constant values.
*You can do this with a switch statement!
*This basic program execute the first case whose constant expression matches the value of the switch expression
*and Then it will jump all the way to the end where the break; statement is.
*Keep in min if no case matches, then the default case statements are executed!!
*/

#include <iostream>
using namespace std;

//Generic switch statement template

int main(){
	switch(a){
	case 0: // indent for clarity and readability
		// print "zero"
		break;
	
	case 1: // When a is equal to one we will print "one"
	   // Print "one"
	   break;
	
	case 2:
	   // Print "two"
	   break;
	
	default: //(default case) if none of the cases match or execute the default here will execute
	   // Print "two"
	   break;
	}
	
	return 0;
}

/*
*Caption:
*1. A switch statement more cleary represents multi-branch behavior when comparing a variable to a constant value!
*2. The program will execute the first case whose contsant expression mathces the value of the switch expression, executes that case's statements, and then leaps to the end.
*3. If no case matches, then the default case statements are executed.
*/
/*
A switch statement can be written wit a multi-branc if-else statement however there may be reasons why you do not want to do this
if (dogYears == 0) {           // Like case 0
   // Print 0..14 years
}
else if (dogYears == 1) {      // Like case 1
   // Print 15 years
}
...
else if (dogYears == 5) {      // Like case 5
   // Print 37 years 
}
else {                         // Like default case
   // Print unknown
}
*/

//Switch statement general form
/*
*Your switch statement's expression should be an integer or char not a string or floating-point data type.
*Each case must have a constant expression like 2 or 'q'; a case expresion can not be a variable!!!!
*/

switch (expresion){
	case constantExpr1;
	   //statements
	      break;
	case costantExpr2;
	   //statements
	      break;
	...
	default: // If no other case matches
	//Good practice is to always have a default case for a switch statement.
	//You may be sure all cases are covered only to realize you didnt suprise and some case was missing
	   // Statements
	      break;
}

		  
}