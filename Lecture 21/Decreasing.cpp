// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

void Decreasing(int n) {
	if (n == 0) {
		return;
	}

	cout << n << " ";
	Decreasing(n - 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Decreasing(n);

	return 0;
}