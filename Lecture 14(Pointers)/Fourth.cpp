// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

// void solve(int *a) {
// 	*a = *a + 1;
// 	cout << "Inside Function a = " << *a << endl;
// }

void solve(int &a) {
	a = a + 1;
	cout << "Inside Function a = " << a << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a = 10;
	solve(a);
	cout << "Inside Main a = " << a << endl;
	return 0;
}