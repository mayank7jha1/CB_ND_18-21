// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {

	if (a.find(b) == 0 or b.find(a) == 0) {
		return a.length() > b.length();
	}

	return a < b;
}


s

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, compare);
	for (auto x : a) {
		cout << x << endl;
	}
	return 0;
}