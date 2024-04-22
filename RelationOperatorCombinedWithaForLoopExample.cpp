

//While loop using a relation operator in the loop expresion
#include <iostream>
using namespace std;
int main(){
	int userNum;
	
	cin >> userNum;
	
	while(userNum > 0){
		cout << userNum % 10 << endl;
		userNum = userNum / 10;
	}
	
	return 0;
}