// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char a[] = {'A', 'B', 'C', '\0'};
	cout << (void*)a << endl;
	cout << &a << endl;
	cout << a << endl;

	char b[] = "Mayank";
	cout << b << endl;

	char ch;
	while (ch != '$') {
		cin.get(ch);
		cout << ch << " ";
	}

	char c[100];
	cin.get(c, 100, '$');
	cout << c << endl;
	cin.ignore();
	int x;
	cin >> x;
	cout << x;



	int x;
	cin >> x;
	cout << x << endl;
	// string p;
	// getline(cin, p);
	char p[100];
	//cin.getline(p, 100);
	cin >> p;
	cout << p;

	char *p = "ABC";
	cout << p << endl;



	return 0;
}