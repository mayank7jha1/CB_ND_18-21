// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

void Increasing(int n) {
	if (n == 0) {
		return;
	}
	Increasing(n - 1);
	cout << n << " ";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Increasing(n);

	return 0;
}