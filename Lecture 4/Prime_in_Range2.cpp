// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//n=19
	int n;
	cin >> n;
	cout << 2 << " ";
	int i = 3;
	while (i <= n) {
		//i=5
		int j = 2;
		int flag = 0;
		while (j <= i - 1) {
			if (i % j == 0) {
				flag = 1;
			}
			j = j + 1;
		}
		if (flag == 0) {
			cout << i << " ";
		}
		i = i + 1;
	}

	return 0;
}