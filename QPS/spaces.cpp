// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch;
	ch = cin.get();
	int alpha = 0, digit = 0, others = 0;;
	while (ch != '$') {
		if ((ch >= 65 and ch <= 90) or (ch >= 97 and ch <= 123)) {
			alpha++;
		} else if (ch >= 48 and ch <= 57) {
			digit++;
		} else {
			others++;
		}
		ch = cin.get();
	}
	cout << alpha << " " << digit << " " << others << endl;
	return 0;
}