/*
*A program is only Pseudo-random meaning that "it looks random, but its not actually random"
*Every time you run your program you will get the same sequnce of random values each function call
*Every time you run your program you will get the same integers printed
*you can use a unique see each time the program runs in order to avoide this using the time() function
*/

#include <iostream>
#include <cstdlib>
#include <ctime>    //Enables use of the time() function
using namespace std;

int main(){
	srand(time(0)); // here we are changing our seed using the srand function to a random seed
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	
	//without changing the seed even though we get random numbers each time we ran the application
	//We would get the same sequnce of integers agian and again 
	//The seed should only be done once in a program, and it should be before the first call to rand()
	//the funciton time() returns the number of seconds since jan 1, 1970.
	return 0;
}