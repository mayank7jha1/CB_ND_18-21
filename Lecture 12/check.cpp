// Created by Mayank

#include <iostream>
#include<string>
using namespace std;

int length(char s[]) {
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int a[5] = {1, 2, 3, 4, 5};
	// for (int i = 0; i < 5; i++) {
	// 	cout << a[i] << " ";
	// }
	//cout << a << endl;
	//cout << endl;

	//char b[5] = {'a', 'b', 'c', 'd', 'e'};
	//char b[6] = "abcde";
	// for (int i = 0; i < 5; i++) {
	// 	cout << b[i] << " ";
	// }
	// cout << endl;
	//cout << b << endl;
	// int a = 1;
	// int b = 2;
	// int c = 3;
	// int d = 4;
	// int e = 5;


	// char ch = 'a';
	// char ch1 = 'b';
	// char ch2 = 'c';
	// char ch3 = 'd';
	// char ch4 = 'e';
	//string s = "Mayank";

	// String s1;
	// s1.function_name();

	//cout << s.length();

	//int z = s.length();
	// char s[6] = "abcde";

	// int d = length(s);
	// cout << d << endl;

	//int a[6];
	// for (int i = 0; i < 6; i++) {
	// 	cin >> a[i];
	// }
	// for (int i = 0; i < 6; i++) {
	// 	cout << a[i];
	// }
	//char a[6];
	// for (int i = 0; i < 6; i++) {
	// 	cin >> a[i];
	// }
	// for (int i = 0; i < 6; i++) {
	// 	cout << a[i];
	// }
	// cin >> a;//set of characters
	// cout << a;

	//string s = "ant";
	//cin >> s;
	// for (int i = 0; i < 3; i++) {
	// 	cout << s[i];
	// }

	//cout << s[3] << " ";
	//cout << s;
	// cout << " " << s.length();
	string s, s1;
	cin >> s >> s1;
	//cout << s;
	// for (int i = 0; i < s.length(); i++) {
	// 	cout << s[i];
	// }

	// int a = 10;
	// int b = 20;
	// cout << a + b;
	// string s2 = s + " " + s1;
	// cout << s2;
	// char a[6], b[6];
	// cin >> a >> b;
	// char c[100];
	// for (int i = 0; i < 6; i++) {
	// 	c[i] = a[i] + b[i];
	// 	cout << c[i];
	// }

	string s, s1;
	cin >> s >> s1;
	if (s == s1) {
		cout << "Yes";
	} else {
		cout << "No";
	}

	/*
	1. String s;
	2. Reverse s;
	3. Store s;//s1
	4.Check if s and s1 are equal or not:

	*/
	return 0;
}