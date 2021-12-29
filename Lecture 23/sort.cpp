// Created by Mayank

#include <bits/stdc++.h>
using namespace std;



class student {
public:
	string name;
	int value;
};

bool compare(student a, student b) {
	return a.name < b.name;
}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	student s[4];
	for (int i = 0; i < 4; i++) {
		cin >> s[i].name;
		cin >> s[i].value;
	}

	sort(s, s + 4, compare);

	for (int i = 0; i < 4; i++) {
		cout << s[i].name << " ";
		cout << s[i].value << endl;
	}

	return 0;
}