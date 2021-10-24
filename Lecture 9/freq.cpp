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
	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << " ";
	// }
	int freq[10005] = {0};
	for (int i = 0; i < n; i++) {
		freq[a[i]] = freq[a[i]] + 1;
	}

	for (int i = 0; i < 10005; i++) {
		if (freq[i] > 0) {
			cout << i << "->" << freq[i] << endl;
		}
	}

	return 0;
}