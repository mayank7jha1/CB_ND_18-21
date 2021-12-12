// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

// This is how you make a function generic to accept different types of argument.
template<typename T>
bool find_key(T *a, int n, T key) {
	for (int i = 0; i < n; i++) {
		if (a[i] == key) {
			return true;
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	char a[n + 1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	a[n] = '\0';
	char key;
	cin >> key;
	cout << key << endl;
	cout << find_key(a, n, key);

	return 0;
}