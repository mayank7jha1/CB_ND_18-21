// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int n, k;

int ans(string s, char x) {
	int ans1 = INT_MIN;
	int j = 0;
	int c = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != x) {
			c++;
		}
		while (c > k and j <= i) {
			if (s[j++] != x) {
				c--;
			}
		}
		if (i - j + 1 > ans1) {
			ans1 = i - j + 1;
		}
	}
	return ans1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	string s;
	cin >> s;
	//First Try:
	int res = ans(s, 'a');

	//Second Try:
	int res2 = ans(s, 'b');

	int value = max(res, res2);
	cout << value << endl;
	return 0;
}