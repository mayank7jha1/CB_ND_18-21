// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int Multiply_Two_Numbers(int x, int y) {
	if (x < y) {
		swap(x, y);
	}

	if (y == 0) {
		return 0;
	}

	return x + Multiply_Two_Numbers(x, y - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	cin >> x >> y;
	cout << Multiply_Two_Numbers(x, y);

	return 0;
}



//1 2 3 4 5 6 =