#include <iostream>
using namespace std;
#include<string>
/*
	Replace all occurrences of character X with character Y in given string
*/
void change(string &s, char x, char y, int i) {
	if (i > s.length()) {
		return;
	}

	if (s[i] == x) {
		s[i] = y;
	}

	return change(s, x, y, i + 1);
}
int main() {
	string s;
	cin >> s;
	char x, y;
	cin >> x >> y;
	change(s, x, y, 0);
	cout << s << " ";
}
