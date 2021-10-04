// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	//n>3//19
	cout << 2 << " " << 3 << " ";
	int i = 4;
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