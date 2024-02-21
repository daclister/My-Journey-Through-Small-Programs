/*
*This progam randomly removes a student from one seat to another seat in a lecture hall
*Here where are learning the basics of the rand function in C++
*the program will switch a student from a random seat on the left (cols 1 to 15)
*to a random seat on the right(cols 16 to 30)
* seat rows are 1 to 20
*/

#include <iostream>
#include <cstdlib> // here we are including the C standard library, which defines the rand() function and RAND_MAX
using namespace std;

int main(){
	int rowNumL; //our row number on the left
	int colNumL;
	int rowNumR;
	int colNumR;
	
	rowNumL = (rand() % 20) + 1; // heere we have 19 values for our mod 0 - 19 and adding 1 shifts it to the right 1 - 20
	colNumL = (rand() % 15) + 1; // 1 to 15

	rowNumR = (rand() % 20) + 1; // 1 to 20
	colNumR = (rand() % 15) + 16; // 16 to 30
	
	cout << "Move from ";
	cout << "row " << rowNumL << " col " << colNumL;
	cout << " to ";
	cout << "row " << rowNumR << " col " << colNumR;
	cout << endl;
	
	return 0;
}