// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int i = 0, j = n - 1;
		int b[n];
		int k = 0;
		while (i < j) {
			b[k] = a[i];
			k++;
			b[k] = a[j];
			k++;
			i++, j--;
		}
		if (i == j) {
			b[k] = a[i];
		}


		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;

	}
	return 0;
}