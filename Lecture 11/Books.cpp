// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, total_time_provided;
	cin >> n >> total_time_provided;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int total_time_consumed = 0;
	int book_read = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		total_time_consumed = total_time_consumed + a[i];
		book_read++;
		if (total_time_consumed > total_time_provided) {
			total_time_consumed = total_time_consumed - a[j];
			j++;
			book_read--;
		}
	}
	cout << book_read << endl;

	return 0;
}