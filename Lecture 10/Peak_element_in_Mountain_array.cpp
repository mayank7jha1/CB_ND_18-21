// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int peak_element_in_mountain_array(int a[], int n) {
	int s = 0, e = n - 1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] < a[mid + 1]) {
			s = mid + 1;
		} else {
			e = mid - 1;
			ans = mid;
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

	cout << peak_element_in_mountain_array(a, n);

	return 0;
}