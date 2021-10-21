// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch;
	int x = 0, y = 0;

	while (cin >> ch) {
		if (ch == 'S') {
			x = x - 1;
		} else if (ch == 'N') {
			x = x + 1;
		} else if (ch == 'E') {
			y = y + 1;
		} else if (ch == 'W') {
			y = y - 1;
		}
	}
	//cout << x << " " << y << endl;
	while (y > 0) {
		cout << 'E';
		y = y - 1;
	}//y=0;
	while (x > 0) {
		cout << 'N';
		x = x - 1;
	}
	while (abs(x) > 0) {
		cout << 'S';
		x = x + 1;
	}
	while (abs(y) > 0) {
		cout << 'W';
		y = y + 1;
	}

	return 0;
}