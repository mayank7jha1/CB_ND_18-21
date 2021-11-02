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
	int i = 0, j = n - 1;
	int s = 0, d = 0;
	int k = 0;

	while (i <= j and k < n ) {
		if (a[i] >= a[j] and k % 2 == 0) {
			s = s + a[i];
			i++;
		} else if (a[j] > a[i] and k % 2 == 0) {
			s = s + a[j];
			j--;
		} else if (a[i] >= a[j] and k % 2 == 1) {
			d = d + a[i];
			i++;
		} else if (a[j] > a[i] and k % 2 == 1) {
			d = d + a[j];
			j--;
		}
		k++;
	}
	// cout << k << ' ';
	if (i == j and k % 2 == 0) {
		s = s + a[i];
	}
	if (i == j and k % 2 == 1) {
		d = d + a[i];
	}
	cout << s << " " << d << endl;

	return 0;
}