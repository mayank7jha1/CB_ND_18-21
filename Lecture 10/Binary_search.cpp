// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int n, int key) {
	int s = 0, e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			//return mid;//function stop and flow will be at main
			ans = mid;
			break;
		} else if (a[mid] < key) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	//cout << "Checker" << endl;;
	return ans;
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
	int key;
	cin >> key;
	int ans = binary(a, n, key);
	if (ans == -1) {
		cout << "Element not Found";
	} else {
		cout << "Element found at Index " << ans << endl;
	}
	return 0;
}