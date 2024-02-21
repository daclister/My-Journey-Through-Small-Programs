/*
*Here we put basic random integers using the rand() function in the C standard library
*you must invoke the rand() function in order to use. remeber a function is a repeatable block of code
*the range of the random numbers is from 0 to RAND_MAX("This number is machine dependent so you may get a diffrent number from me)
*the value is at least 32,767
*/

#include <iostream>
#include <cstdlib> // here we are including the C standard library, which defines the rand() function and RAND_MAX
using namespace std;

int main(){
	cout << rand() << endl; // example of invoking a function
	cout << rand() << endl;
	cout << rand() << endl;
	
	cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;
	
	return 0;
}