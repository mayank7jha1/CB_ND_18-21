// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	map<string, int>db;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (db[s] == 0) {
			db[s] = 1;
			cout << "OK" << endl;
		} else {
			cout << s << db[s] << endl;
			db[s]++;
		}
	}

	return 0;
}