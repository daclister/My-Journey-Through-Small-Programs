//For loops will iterate(run) a set amount of times
/*incrementing loops is so common that there are short hand ways to do this such as the 
*increment operator(++)
*decrement operator(--)
*/

//Example For loop: Savings interest program.

#include<iostream>
using namespace std;

int main(){
	double intialSavings; 	//User-entered intial savings
	double intrestRate:		//Intrest rate
	double currSavings;		//Current savings with intrest 
	int i;
	
	cout << "Enter intial savings: ";
	cin >> intialSavings;
	
	cout << "Enter interest rate: ";
	cin >> intrestRate;
	
	cout << endl << "Annual savings for 10 years: " << endl;
	
	currSavings = intialSavings;
	for (i = 0; i < 10; ++i) {
		cout << "$" << currSavings << endl;
		currSavings = currSavings + (currSavings * intrestRate);
	}
	
	return 0;
}

