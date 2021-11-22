// Created by Mayank

#include <iostream>
#include<algorithm>
using namespace std;

//Passing functions as argument:

bool compare(int a , int b) {
	if (a > b) {
		return true;
	} else {
		return false;
	}
	// return a > b;
}

void bubblesort(int *a, int n, bool cmp(int x, int y)) {
	for (int i = 0; i < n - 1; i++) {
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (cmp(a[j], a[j + 1]) == 1) {
				flag = 1;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
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
	//bubblesort(a, n, compare);
	sort(a, a + n, compare);

	for (auto x : a) {
		cout << x << " ";
	}
	return 0;
}