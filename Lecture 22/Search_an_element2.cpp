// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool Search_an_Element(int *a, int i, int n, int key) {
	if (i > n - 1) {
		return false;
	}

	if (a[i] == key) {
		return true;
	}
	return Search_an_Element(a, i + 1, n, key);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int key;
	cin >> key;
	cout << Search_an_Element(a, 0, n, key);
	return 0;
}