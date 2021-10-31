// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {//Passes
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++) {//Kaha tak Jaayenge
			//count++;
			if (a[j] > a[j + 1]) {
				flag = 1;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				//count++;
			}
		}
		if (flag == 0) {
			break;
		}
	}
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
	cout << "Before Sorting" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	bubbleSort(a, n);
	cout << "After Sorting" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}