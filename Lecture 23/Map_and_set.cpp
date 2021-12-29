// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<int, int>m;
	//Frequency:
	int n;
	cin >> n;
	for (int i = 0; i < n; i++ ) {
		int x;
		cin >> x;
		m[x]++;
	}

	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << it->second << endl;
	}

	//cout << (*m.begin()).first;

	// vector<int>v{1, 2, 3, 4, 5};
	// cout << *(v.begin()) << endl;




}