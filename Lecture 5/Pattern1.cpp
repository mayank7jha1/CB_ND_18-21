// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// Number of rows:
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		// ABCDE:
		char value = 'A';//65

		for (int j = n - i + 1; j > 0; j--) {//5->1
			cout << value;
			value = value + 1;//66
		}
		for (int j = n - i + 1; j > 0; j--) {//5->1
			value = value - 1;
			cout << value;
		}
		cout << endl;

	}

	return 0;
}

