// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool IsSorted(int *a, int i, int n) {

	if (i == n - 1) {
		return true;
	}

	if (a[i] < a[i + 1] and IsSorted(a, i + 1, n)) {
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
	cout << IsSorted(a, 0, n);

	return 0;
}



//1 2 3 4 5 6 =