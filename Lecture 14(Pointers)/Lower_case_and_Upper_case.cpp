// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch = 'a';

	cout << (char)(ch - 32) << endl;

	if (islower(ch)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	ch = tolower(ch);
	cout << ch << endl;
	int x = 10;
	string s = "Mayank";
	s = s + to_string(x);
	cout << s << endl;
	char ch1 = '9';
	int p = ch1 - '0';
	cout << p << endl;
	int num = 9;
	char ch2 = num + '0';
	cout << (char)ch2 << endl;

	return 0;
}