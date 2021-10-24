// Created by Mayank

#include <iostream>
using namespace std;

// Function Definition
// Two numbers ka sum karna hai and then user aapko
// ek number dega aapko uske sath multiply karna hain:

// void sum_mayank(int x, int y) {
// 	for (int i = 0; i < 10; i++) {
// 		cout << "Mayank" << endl;
// 	}
// }


void swap_Mayank(int &  x, int &y) {
	int temp = x;
	x = y;
	y = temp;
	cout << "New Value of x= " << x
	     << " New Value of y is = " << y << endl;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;
	cin >> a >> b;
	swap_Mayank(a, b);
	cout << "New Value of x= " << a
	     << " New Value of y is = " << b << endl;



}


// sqrt(100);
// pow(2, 4);
// swap(a,b);