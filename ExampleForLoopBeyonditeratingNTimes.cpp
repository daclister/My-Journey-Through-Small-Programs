#include<iostream>
using namespace std;

//outputs 10 15 20 25 30 35 40 45 50

int main(){
	int i;
	
	for (i = 10; i <= 50; i = i + 5){//Outputting multiples of 5 from 10 to 50
		cout << i << " ";
	}
	
	cout << endl;
	
	return 0;
}

/*
*The three parts of a for loop may be adjusted to do more than just iterate N time.
*/