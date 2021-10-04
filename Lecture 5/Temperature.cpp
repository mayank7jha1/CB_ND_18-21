// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	float i, f, s;
	float c = 0;
	cin >> i >> f >> s;

	while (i <= f) {
		c = (i * 5 / 9) - 32;
		cout << c << endl;
		i = i + s;
	}
	return 0;
}