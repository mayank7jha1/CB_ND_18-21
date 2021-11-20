// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int p = 10;
	int q = p++;
	cout << q << endl;
	cout << p << endl;
	int z = 10;
	int y = ++z;
	cout << y << endl;

	int x = 10;
	cout << ~x << endl;

	int m = 10;
	m = m << 2;
	cout << m << endl;

	return 0;
}