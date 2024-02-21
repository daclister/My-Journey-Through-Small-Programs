/*
*We demonstrate the use of unsigned long and unsinged long long variables
*If you know your value will alaways be positive such as birthdays
*you can put an unsigned before your data type indicating it is always positive
*/

#include <iostream>
using namespace std

int main(){
	unsigned long memSizeGib;
	unsigned long long memSizeBytes;
	unsigned long long memSizeBits;
	
	cout << "Enter memory size in GIBs: ";
	cin >> memSizeGib; //input consrtuctes create a new line on their own so we don't really need to add one
	
	// 1 GiB = 1024 Mib, 1 MiB = 1024 Kib, 1 KiB = 1024 bytes
	memSizeBytes = memSizeGiB * (1024 * 1024 * 1024);
	// 1 byte = 8 bits
	memSizeBits = memSizeBytes * 8;
	
	cout << "Memory size in bytes: " << memSizeBytes << endl;
	cout << "Memory size in bits: " << memSizeBits << endl;
	
	return 0; // ends the program telling the operatting system the program ended without error.
}