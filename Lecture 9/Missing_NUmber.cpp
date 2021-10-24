// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n - 1];
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		sum = sum + a[i];
		ans = ans ^ a[i];
	}

	// int freq[10005] = {0};
	// for (int i = 0; i < n - 1; i++) {
	// 	freq[a[i]]++;
	// }
	// for (int i = 1; i <= n; i++) {
	// 	if (freq[i] == 0) {
	// 		cout << i << endl;
	// 		break;
	// 	}
	// }

	// Using sum:
	// int total = (n * (n + 1) ) / 2;
	// cout << total - sum << endl;

	// Using Xor
	// for (int i = 1; i <= n; i++) {
	// 	ans = ans ^ i;
	// }
	// cout << ans << endl;

	return 0;
}