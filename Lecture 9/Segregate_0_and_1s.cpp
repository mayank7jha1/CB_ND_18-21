// Created by Mayank

#include <iostream>
using namespace std;

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

	int count0 = 0, count1 = 0, count2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			count0++;
		} else if (a[i] == 1) {
			count1++;
		} else {
			count2++;
		}
	}

	while (count0 > 0) {
		cout << 0;
		count0--;
	}
	while (count1 > 0) {
		cout << 1;
		count1--;
	}
	while (count2 > 0) {
		cout << 2;
		count2--;
	}


	return 0;
}