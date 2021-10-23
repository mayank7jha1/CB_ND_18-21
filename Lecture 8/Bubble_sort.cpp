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
	//int flag;
	//int count=0;
	for (int i = 0; i < n - 1; i++) {//Passes
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++) {//Kaha tak Jaayenge
			count++;
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

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
//n=5;
// i=0;
// i=1;
// i=2;
// i=3;

//3 5 1 2 4

