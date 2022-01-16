// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

void permute(char *in, int i) {
	if (in[i] == '\0') {
		cout << in << endl;
		return;
	}

	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i], in[j]);
		permute(in, i + 1);
		swap(in[i], in[j]);//Backtracking
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char in[100];
	cin >> in;

	permute(in, 0);

	return 0;
}