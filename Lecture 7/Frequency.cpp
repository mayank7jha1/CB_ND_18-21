// Created by Mayank

#include <bits/stdc++.h>
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
		// freq[a[i]]++;
	}

	int xyz[100005] = {0};
	for (int i = 0; i < n; i++) {
		xyz[a[i]] = xyz[a[i]] + 1;
		//freq[a[i]]++;
	}

	//cout << xyz[key] << " ";

	for (int i = 0; i < 10; i++) {
		cout << i << "->" << xyz[i] << endl;
	}

	return 0;
}