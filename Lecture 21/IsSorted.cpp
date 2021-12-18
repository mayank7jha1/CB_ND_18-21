// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool IsSorted(int a[], int n) {

	if (n == 0 or n == 1) {
		return true;
	}

	if (a[0] < a[1] and IsSorted(a + 1, n - 1)) {
		return true;
	}

	return false;

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
	cout << IsSorted(a, n);

	return 0;
}