// Created by Mayank

#include <bits/stdc++.h>
using namespace std;


int Flowers(int n, int k) {
	if (n == 0) {
		return 1;
	}

	int option1 = Flowers(n - 1, k);
	int option2 = 0;
	if (n >= k) {
		option2 = Flowers(n - k, k);
	}

	return option2 + option1;

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	cout << Flowers(n, k);

	return 0;
}