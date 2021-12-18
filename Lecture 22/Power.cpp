// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
	if (n == 0) {
		return 1;
	}
	return x * power(x, n - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, n;
	cin >> x >> n;
	cout << power(x, n) << endl;
	return 0;
}