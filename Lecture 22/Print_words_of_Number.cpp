// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

char words[][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void number_to_words(int n) {
	if (n <= 0) {
		return;
	}

	int digit = n % 10;
	number_to_words(n / 10);
	cout << words[digit] << " ";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	number_to_words(n);
	return 0;
}