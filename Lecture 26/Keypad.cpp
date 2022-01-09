// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

char keypad[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void print_permutations(char *in, char *output, int i, int j) {

	// Stop:
	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	int digit = in[i] - '0';

	for (int k = 0; keypad[digit][k] != '\0'; k++) {
		output[j] = keypad[digit][k];
		print_permutations(in, output, i + 1, j + 1);
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char in[1000];
	cin >> in;
	char output[1000];
	print_permutations(in, output, 0, 0);
	return 0;
}