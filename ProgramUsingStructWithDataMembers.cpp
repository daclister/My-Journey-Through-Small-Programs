/*Sometimes data can be grouped togher in a program because these two data items are really an aspect of the same data.
*For eaxmple hours and minutes are really just an aspect of time such as 4hours and 23minutes is the time
*You can store these data values sepratley however, it may be better to store them togther!
*you can store them in one variable called runTime, with the subitems runTime.hours and runTime.minutes!
*/
#include<iostream>
using namespace std;
//A struct enables creating a variable with data members.
	struct TimeHrMin{
		//struct just defines new type; no memory is allocated
		int hrVal;
		int minVal;
	}
int main (){
	//Basic syntaxt for a struct defined with the dataType groupedVariableName{dataType subVariableName};

	
	//structs use dot notation in order to define the variables that will go into the sub categorys
	...
	   timeHrMin timeStr1;
	   timeHrMin timeStr2;
	   timeHrMin timeStr3;
	   
	   timeStr1.hrVal = 5;
	   timStr1.minVal = 46;
	   timeStr3.hrVal = timeStr1.hrVal;
	
	return 0;
}