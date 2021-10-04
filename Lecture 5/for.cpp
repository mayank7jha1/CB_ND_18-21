// Created by Mayank

#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	//user n:
	for (int i = 1; i <= n; i++) {//i==3
		if (i == 3) {
			continue;
		}
		cout << i << " Mayank " << endl;
	}


	return 0;
}