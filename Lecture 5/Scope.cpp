// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int p = 300; //Global scope:

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int value = 900;
	if (value > 200) {

		int p = 20;//block scope
		cout << p + 109 << endl;;
	}
	cout << p + 200;

	return 0;
}