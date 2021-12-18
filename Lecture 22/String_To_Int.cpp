// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int String_to_Int(string s, int n) {
	if (n == 0) {
		return 0;
	}
	int digit = s[n - 1] - '0';
	int small_ans = String_to_Int(s, n - 1);
	return small_ans * 10 + digit;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	cout << String_to_Int(s, s.length()) << endl;

	return 0;
}