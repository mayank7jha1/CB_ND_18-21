// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool IspalindromeString(string s) {
	int j = s.length() - 1;
	for (int i = 0; i < j; i++) {
		if (s[i] != s[j]) {
			return false;
		}
		j--;
	}
	return true;

}

bool Ispalindrome(char *ch) {
	int j = strlen(ch) - 1;
	for (int i = 0; i < j; i++) {
		if (ch[i] != ch[j]) {
			return false;
		}
		j--;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char ch[100], ch1[100];
	cin >> ch ;
	string s;
	cin >> s;

	// for (int i = 0; ch[i] != '\0'; i++) {
	// 	if (ch[i] != ch1[i]) {
	// 		return false;
	// 	}
	// }

	// string s = "";

	// for (int i = 0; ch[i] != '\0'; i++) {
	// 	s = s + ch[i];
	// }

	// cout << s << endl;



	if (Ispalindrome(ch) == 0) {
		cout << "Yes, it is a Palindrome. " << endl;
	} else {
		cout << "No, it is not a Palindrome. " << endl;
	}

	if (IspalindromeString(s) == 1) {
		cout << "Yes, it is a Palindrome. " << endl;
	} else {
		cout << "No, it is not a Palindrome. " << endl;
	}

	// string s, s1;
	// cin >> s >> s1;
	// if (s > s1) {
	// 	cout << "yes";
	// } else {
	// 	cout << "No";
	// }

	return 0;
}

