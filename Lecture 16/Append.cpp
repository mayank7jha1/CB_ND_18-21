// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

char* append_string(char *a, char *b) {
	int j = strlen(a) ;//6
	for (int i = 0; b[i] != '\0'; i++) {
		a[j] = b[i];
		j++;
	}
	//cout << j << endl;
	a[j] = '\0';
	return a;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch[100], ch1[100];
	cin >> ch >> ch1;

	cout << append_string(ch, ch1);
	return 0;
}