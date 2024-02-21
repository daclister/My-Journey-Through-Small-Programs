/*
*In programming and C++ espically there is a diffrent operator for the equality symbol
*Unlike tradition algebra this operator is actually ==
*/
//A program that uses an equality operator and multiple if statements to classify
//Anniversaries.

#include <iostream>
using namespace std;

int main(){
	int numYears;
	cout << "Enter the number of years you have been married: ";
	cin >> numYears;
	
	if (numYears == 1) //using the equality operator we check if our variable has the number 1 stored in it and that it is equal to the number 1 on our right hand side
	{
		cout << "Your first year -- great!" << endl;
	}
	else if (numYears == 10) 
	{
		cout << "A whole decade -- impressive." << endl;
	}
	else if (numYears == 25)
	{
		cout << "Your silver anniversary -- enjoy." << endl;
	}
	else if (numYears == 50) {
		cout << "Your golden anniversary -- amazing." << endl;
	}
	else 
	{
		cout << "Nothing special." << endl;
	}
	
	return 0;
}
