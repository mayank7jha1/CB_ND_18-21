// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int Sum_Of_Array(int *a, int n) {

	if (n == 0) {
		return 0;
	}
	return a[0] + Sum_Of_Array(a + 1, n - 1);
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
	cout << Sum_Of_Array(a, n);

	return 0;
}



//1 2 3 4 5 6 =