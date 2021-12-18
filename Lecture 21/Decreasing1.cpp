// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

void Decreasing(int n, int i) {
	if (i > n) {
		return;
	}
	Decreasing(n, i + 1);
	cout << i << " ";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Decreasing(n, 1);

	return 0;
}