// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch;
	cin >> ch;
	if (ch >= 65 and ch <= 90) {
		cout << "Upper";
	} else if (ch >= 97 and ch <= 123) {
		cout << "Smaller";
	}
	return 0;
}