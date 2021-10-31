// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int sum_number(int a[]) {
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = ans + a[i];
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
	int x = sum_number(a);
	cout << x << endl;

	return 0;
}