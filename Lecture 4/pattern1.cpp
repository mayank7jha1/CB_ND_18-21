// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;//Number of rows:
	cin >> n;
	int i = 1;
	int count = 1;

	while (i <= n) {
		int j = 1;
		while (j <= i) {
			cout << count << " ";
			j = j + 1;
			count = count + 1;
		}
		cout << endl;
		i = i + 1;
	}


	return 0;
}