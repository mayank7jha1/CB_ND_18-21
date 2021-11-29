// Created by Mayank

#include <iostream>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;

int length(char *ch) {
	int ans = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		ans++;
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char ch[100];
	cin >> ch;
	string s;
	cin >> s;
	cout << "String Length is " << s.length() << endl;
	cout << length(ch) << endl;;
	cout << strlen(ch) << endl;//Character Array length

	return 0;
}