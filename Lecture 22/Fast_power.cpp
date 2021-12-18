// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int fast_power(int x, int n) {
	if (n == 0) {
		return 1;
	}
	int small_ans = fast_power(x, n / 2);
	small_ans = small_ans * small_ans;
	if (n & 1) {
		return small_ans * x;
	}
	return small_ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, n;
	cin >> x >> n;
	cout << fast_power(x, n) << endl;
	return 0;
}

