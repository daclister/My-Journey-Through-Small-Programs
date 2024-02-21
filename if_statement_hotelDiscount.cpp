/*
*If statements are an important part of programming they allow our programs to make
*to make decesions and only excute a block of code if ceartin conditions are met.
*/
//program that validates if a user is above 65 then applies an discount
#include <iostream>
using namespace std;

int main(){
	int hoteRate;
	int userAge;
	
	hotelRate = 155;
	
	cout << "Enter age: ";
	cin >> userAge;
	
	it (userAge > 65)// the condition that we are checking for
	{
		//code to be executed if the condition is true
		hotelRate -= 20;
	}
	
	cout << "Your hotel rate: ";
	cout << hoteRate << endl;
	
	return 0;
}