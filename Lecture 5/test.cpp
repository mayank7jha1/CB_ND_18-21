// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int sum = 0;
	int t = n;
	int p;
	while (n > 0) {
		int digit = n % 10;
		p = pow(digit, 3);
		cout << sum << endl;
		sum += p;
		n = n / 10;
	}
	if (t == sum) {
		cout << "yes";
	}

	return 0;
}