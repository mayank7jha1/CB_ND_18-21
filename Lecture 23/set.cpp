// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	set<int>s;

	int a[] = {4, 3, 3, 2, 2, 1, 3, 3, 2, 1, 21, 2, 3, 3, 4, 4, 3, 2, 2,};
	int n = sizeof(a) / sizeof(int);
	for (int i = 0; i < n; i++) {
		s.insert(a[i]);
	}

	// for (auto it = s.begin(); it != s.end(); it++) {
	// 	cout << (*it) << endl;
	// }
	for (auto x : s) {
		cout << x << endl;
	}

	cout << *(s.find(4)) << endl;



	return 0;
}