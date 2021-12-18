// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int Factorial(int n) {
	if (n == 0 or n == 1) {
		return 1;
	}

	return n * Factorial(n - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << Factorial(n);

	return 0;
}