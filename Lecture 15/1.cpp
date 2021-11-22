// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
	string ab = a + b;
	string ba = b + a;
	if (ab > ba) {
		return true;
	} else {
		return false;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n, compare);
		for (auto x : a) {
			cout << x;
		}
		cout << endl;
	}
	return 0;
}