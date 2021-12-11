// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
	return a;
}
int sum(int a, int b) {
	return a + b;
}
int sum(int a, int b, int c) {
	return a + b + c;
}
int sum(int a, int b, double c) {
	return a + b + c;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << sum(200, 1, 3.2);

	return 0;
}