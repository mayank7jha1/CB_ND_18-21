// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int factorial(int x) {
	int ans = 1;
	for (int i = 1; i <= x; i++) {
		ans = ans * i;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, r;
	cin >> n >> r;

	int a = factorial(n);
	int b = factorial(r);
	int c = factorial(n - r);
	cout << a / (b * c) << endl;
	return 0;
}