// Created by Mayank

#include <iostream>
using namespace std;

void swap_Number(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
	cout << "a=" << x << " b=" << y << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a, b;//a,b integer
	cin >> a >> b;

	swap_Number(a, b);
	cout << "a=" << a << " b=" << b << endl;

	//swap(a, b);//Inbuilt

	return 0;
}