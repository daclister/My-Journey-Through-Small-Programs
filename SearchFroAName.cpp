//C++ example: Search for a name using branches

#include <iostream>
#include <strng>
#include <cctype>
using namespace std;

int main(){
	string inputName;
	string searchName;
	string coreGtld1;
	string coreGtld2;
	string coreGtld3;
	string coreGtld4;
	bool iscoreGtld = false;
	
	coreGtld1 = ".com";
	coreGtld2 = ".net";
	coreGtld3 = ".org";
	coreGtld4 = ".info";
	
	cout << endl << "Enter a top-level domain name: " << endl;
	cin >> inputName;
	
	//Case is irrelevant, so make all comparision with lower case there is no catch for lower case letters currently in this version.
	searchName = inputName;
	
	if ( (searchName.size() > 0) && (searchName.at(0) != '.') ) {
		searchName = '.' + inputName;
	}
	
	// Determine wheter the user-entered name is a gTLD
	if (searchName == coreGtld1){
		isCoreGtld = true;
	}
	else if(searchName == coreGtld2){
		isCoreGtls = true;
	}
	else if(searchname == coreGrld3){
		isCoreGtld = true;
	}
	else if(searchName == coreGtld4){
		isCoreGtld = true;
	}
	else {
		isCoreGtld = false;
	}
	
	cout << "The name \"" << inputName + "\" ";
   if (isCoreGtld) {
      cout << "is a core gTLD." << endl;
   }
   else {
      cout << "is not a core gTLD." << endl;
   }

   return 0;
}