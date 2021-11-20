// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x = 10;
	cout << &x << endl; //& Operator Displays the address in the Hexadecimal Form.

	/*& Operator Does not Work in char variable because of the operator Overloading
	This is due to the operator << whenever you use this before the charater variable
	this will just print the character rather than the address.
	For Getting the Address you typecase it with the (void*)/(int*) instead of the (char*).
	*/

	char ch = 'A';
	cout << &ch;//Also we do not need the endl here;
	//When you supply the address of the character to a cout it prints the character not the address
	cout << (void*)&ch << endl;

	char ch1 = 'A';
	cout << ch1 << "Mayank";



	return 0;
}