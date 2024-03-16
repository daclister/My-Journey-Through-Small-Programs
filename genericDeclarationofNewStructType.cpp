/*Sometimes data can be grouped togher in a program because these two data items are really an aspect of the same data.
*For eaxmple hours and minutes are really just an aspect of time such as 4hours and 23minutes is the time
*You can store these data values sepratley however, it may be better to store them togther!
*you can store them in one variable called runTime, with the subitems runTime.hours and runTime.minutes!
*/
#include<iostream>
using namespace std;
//A struct enables creating a variable with data members.
int main (){
struct StructTypeName{
	dataType item1; //Don't forget a dataType is just the type of data you are working with for example an int data type is nothing more than an integer value such as -1, or 2
	dataType item2; //these subitems are called data members.
	... // this dot notation is just here to show you that you can have anynumber of subitems you want as long as there is enough memory for them!
	type itemN;
};

...
StructTypeName myVar; // your variable that you will have hold the data from the structs sub categories

myVar.item1 = theValueYouWantInsideThisVariablesSubItem; //member access operator
}
//This is a generic form for Declaring and using a new struct type 
/*
*Each type within a struct can be any type, such as int or char.
*Each component within a struct is referred to as a data member.
*Accessing data members within a defined variable of a struct is done using the "." operator, also known as the member access operator or dot notation.
*When assigning a variable of a struct type to another variable of the same type, each corresponding data member is automatically assigned.
*/