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

	int maxRow = INT_MIN, maxCol = INT_MIN;
	int sum = 0;

	for (int i = 0; i < row; i++) {
		sum = 0;
		for (int j = 0; j < col; j++) {
			sum += a[i][j];
		}
		maxRow = max(sum, maxRow);
	}

	for (int i = 0; i < col; i++) {
		sum = 0;
		for (int j = 0; j < row; j++) {
			sum += a[j][i];
		}
		maxCol = max(sum, maxCol);
	}

	cout << maxRow << " " << maxCol << endl;

	return 0;
}