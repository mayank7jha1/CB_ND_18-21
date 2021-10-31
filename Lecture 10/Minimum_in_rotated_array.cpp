// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int minimum_in_rotated_array(int a[], int n) {
	int s = 0, e = n - 1;
	int ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] <= a[n - 1]) {
			ans = a[mid];
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}
	return ans;
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

	cout << minimum_in_rotated_array(a, n);

	return 0;
}