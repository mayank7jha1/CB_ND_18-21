// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	set<int, greater<int>>s;
	//set<pair<int, int>>s;
	int a[] = {15, 1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; i++) {
		s.insert(a[i]);
	}

	for (auto x : s) {
		cout << x << " ";
	}
	return 0;
}



// less<int>
// greater<int>
// greater_equal<int>
// less_equal<int>