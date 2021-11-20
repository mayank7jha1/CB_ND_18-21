// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*
	What is the pointer varible:
	It is a variable that stores the address of the another variable.
	We by now know how to create a variable and print the variable we how to store a variable
	for this we require the use case of the pointers.
	*/

	int x = 10;
	int y = 20;
	cout << &x;//This is printing the address of the variable;
	//Storing
	int *xptr = &x;
	/*
		This is a pointer variable of the type same as the variable because let just say
		we store a integer type variable in the char type pointer now since the addresses
		of only the first bucket is stored what this means is that the addresses' size of the
		(char*) and (int*) pointer is same as they are address but a (char*) knows that
		the value of the variable is stored in the one box only but in the case of (int*)
		it knows that the value of the variable is in the four bucket or 8 bucket depending on your
		PC configuration as 64 bits means 8 Byte and 32 is 4 Byte so when a interger variable is
		stored in the character pointer the value may comes out to be wrong as it will only read the
		box only.
	*/

	int *yptr = &y;//This is declaration and initialisation
	int z = 40;
	int *zptr;//This is declaration
	zptr = &z;//This is assignment

	//Size of the pointers are same as  they store the address not the actual value but we can
	//get the actual value
	//We can reassign the address the pointer also;

	cout << yptr << endl;
	//yptr = zptr;
	yptr = &z;
	cout << yptr << endl;


	return 0;
}