// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// (*) is the deferencing Operator
	/*
		(*)->Use Case:
			1.As a Multiplication Operator
			2.As a Pointer Variable to Store the Address.
			3.As a Dereferencing Operator: to dereference any address.

			&Bucket --> Address
			*Address --> Value in the Bucket
	*/

	int x = 10;
	int *xptr = &x;
	cout << "Address is Given by : " << xptr << endl;
	cout << "Value at that address is Given By  : " << *xptr << endl;
	//This is same as:
	cout << "Same thing as : " << *(&x) << endl;


	cout << *(xptr + 1) << endl;
	//This gives the address of xptr+4 because of the integer type and will
	//give the address of that bucket and since we don't know the value at that address
	//this will give any garbage value.

	cout << (*xptr) + 1 << endl;//This is clear


	int y = 20;
	int *yptr = &y;
	/*Address of the variable bucket y*/
	cout << (&y) << endl;
	cout << yptr << endl;
	//Value at the address of the bucket y.
	cout << *(&y) << endl;
	cout << *yptr << endl;

	/*
		::(&yptr)->This means address of the bucket xptr.
		::*(&yptr)-->This means that the value at the address of yptr.
		Which is nothing but the address of the bucket y.
	*/
	cout << *(&yptr) << endl;

	/*
		::(*yptr)->This means value at the address which is stored in the
		bucket yptr. Which is nothing but the value of the bucket y.
		:: &(*yptr)-->This means address of the bucket y only then.s
	*/
	cout << &(*yptr) << endl;

	//What if i want to store the address of the bucket yptr.

	//Here the data type is a pointer so declaration becomes:

	int **zptr = &yptr;
	cout << &yptr << endl;
	cout << zptr << endl;

	return 0;
}