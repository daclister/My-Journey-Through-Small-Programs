/*
*changing a character in a string
*A character in a string can be assinged. 
*If userString is "abcde", then userString.at(3) = 'x'; 
*yields
*"abcxe"
*/

int main () {
	string userWord ="Caterpillar';
	int replaceIndex;
	
	cout << "Enter an index (0-10): ";
	cin >> replaceIndex;
	
	userWord.at(replaceIndex) = '*';
	
	cout << "Updated string: ";
	cout << userWord << endl;
	
	return 0;
}
/*
output examples
Enter an index (0-10): 0
Updated string: *aterpillar

...

Enter an index (0-10): 3
Updated string: Cat*rpillar

...

Enter an index (0-10): 10
Updated string: Caterpilla*
*/