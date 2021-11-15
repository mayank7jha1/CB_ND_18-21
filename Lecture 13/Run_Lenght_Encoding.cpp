// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
//Brute Force:
void solve(string t) {
	int m = t.length();
	string ans;
	for (int i = 0; i < m; i++) {
		int count = 1;
		while (i < m and t[i] == t[i + 1]) {
			count++;
			i++;
		}
		// ans+=s[i]+to_string(count);
		cout << t[i] << count;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	solve(s);

	return 0;
}