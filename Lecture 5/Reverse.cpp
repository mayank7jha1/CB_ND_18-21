// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	while (n > 0) {
		int digit = n % 10;
		n = n / 10;
		ans = ans * 10 + digit;
	}

	cout << ans;

	//cout << __builtin_popcount(5);

	return 0;
}