//For loops will iterate(run) a set amount of times
/*incrementing loops is so common that there are short hand ways to do this such as the 
*increment operator(++)
*decrement operator(--)
*/

//Example For loop: Computing the average of a list of inputs

#include < iostream>
using namespace std;

//Outputs average of list of integers
// First value indicates list size
//Ex: 4 10 1 6 3 yields (10 + 1 + 6 + 3) / 4, or 5

int main(){
	
	int currValue;
	int valuesSum;
	int numValues;
	int i;
	
	cin >> numValues; // Gets number of values in the list
	
	valuesSum = 0;
	
	for (i = 0; i < numValues; ++i){
		cin >> currValues; //Gets next value in list
		valuesSum += currValue;
	}
	
	cout << "Average: " << (valuesSum / numValues) << endl;
	
	return 0;
}

