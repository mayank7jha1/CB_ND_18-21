// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= n - i) {
			cout << " ";
			j = j + 1;
		}
		j = i;
		while (j < 2 * i - 1) {
			cout  << j;
			j = j + 1;
		}
		j = 2 * i - 1;
		while (j > i - 1) {
			cout << j;
			j = j - 1;
		}
		cout << endl;
		i = i + 1;
	}

	return 0;
}