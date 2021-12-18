// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int Sum_Of_Array(int *a, int i, int n) {

	if (i == n) {
		return 0;
	}
	return a[i] + Sum_Of_Array(a, i + 1, n);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Sum_Of_Array(a, 0, n);

	return 0;
}



//1 2 3 4 5 6 =