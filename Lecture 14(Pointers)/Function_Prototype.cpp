// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int sum(int, int);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	cin >> x >> y;
	cout << sum(x, y) << endl;

	return 0;
}
int sum(int x, int y) {
	return x + y;
}

