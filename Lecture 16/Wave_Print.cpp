// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int row, col;
	cin >> row >> col;

	int a[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < col; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < row; j++) {
				cout << a[j][i] << " ";
			}
		} else {
			for (int j = row - 1; j >= 0; j--) {
				cout << a[j][i] << " ";
			}
		}
	}


	return 0;
}