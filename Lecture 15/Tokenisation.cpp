// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// char a[100];
	// cin.getline(a, 100);
	// char *token = strtok(a, " ");
	// while (token != NULL) {
	// 	cout << token << endl;
	// 	token = strtok(NULL, " ");
	// }

	string s;
	getline(cin, s);
	char *token = strtok((char*)s.c_str(), " ");
	while (token != NULL) {
		cout << token << endl;
		token = strtok(NULL, " ");
	}




	return 0;
}


