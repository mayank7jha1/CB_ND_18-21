// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a[] = {1, 2, 3, 4, 5};
	cout << a << endl;
	cout << &a[0] << endl;
	cout << *(a + 0) << endl;
	cout << a[0] << endl;
	//Since the bucket is of integers when i say a+2 what this does is move
	//to the 8 steps as one bucket size is of 4 bytes:
	cout << *(a + 2) << endl;//2*size of the pointer type


	//Never Return address from the function:
	cout << sizeof(a) << endl;
	int x = 10;
	int *xptr = &x;
	char ch = 'A';
	char *chptr = &ch;
	cout << sizeof(xptr) << endl;
	cout << sizeof(chptr) << endl;

	xptr = a;//This is fine
	a = xptr;//This is not fine
	xptr++;//This is fine
	a++;//This is not fine
	return 0;
}