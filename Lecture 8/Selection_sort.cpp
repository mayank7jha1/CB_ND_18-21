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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int minimum;
	for (int i = 0; i < n - 1; i++) {
		minimum = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[minimum]) {
				minimum = j;
			}
		}
		swap(a[minimum], a[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}