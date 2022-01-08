// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	unordered_map<int, int>m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << "->" << it->second << endl;
	}


	cout << endl;

	for (auto x : m) {
		cout << x.first << "->" << x.second << endl;
	}



	return 0;
}