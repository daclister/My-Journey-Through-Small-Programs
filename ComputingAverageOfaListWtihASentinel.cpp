//Computing average of a list with a sentinel (a special value indicating the end of a list)

#include<iostream>
using namespace std;

// Outputs average of list of positive integers 
// List ends with 0 (sentinel)
// Ex: 10 1 6 3 0 yields (10 + 1 + 6 + 3) / 4, or 5

int main(){
	int currValue;
	int valueSum;
	int numValues;
	
	valueSum  = 0;
	numValues = 0;
	
	cin >> currValue;
	
	while (currValue > 0) {// Get values until 0 (or less) // when 0 is inputed the while loop ends!
		valueSum  = valueSum + currValue;
		numValues = numValues + 1;
		cin >> currValues;
	}
	
	cout << "Average: " << (valueSum / numValues) << endl;
	
	return 0;
}