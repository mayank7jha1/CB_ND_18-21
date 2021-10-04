// Created by Mayank

#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	if (a > b and a > c) {
		cout << "A is the greatest";
	} else if (b > c and b > a) {
		cout << "B is the Largest";
	} else {
		cout << "C is the Largest";
	}

	return 0;
}