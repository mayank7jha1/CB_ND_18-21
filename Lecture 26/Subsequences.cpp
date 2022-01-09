// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int count1 = 0;

void subsequences(char *in, char *output, int i, int j) {
	// Stop:
	if (in[i] == '\0') {
		output[j] = '\0';
		cout << output << " ";
		count1++;
		return;
	}
	subsequences(in, output, i + 1, j);
	output[j] = in[i];
	subsequences(in, output, i + 1, j + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char in[1000], output[1000];
	cin >> in;
	subsequences(in, output, 0, 0);
	cout << endl << count1;
	return 0;
}