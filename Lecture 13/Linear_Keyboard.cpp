// Created by Mayank

#include <iostream>
#include<string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s, t;
		cin >> s >> t;
		int mapping[256] = {0};
		for (int i = 0; i < s.length(); i++) {
			mapping[s[i]] = i + 1;
		}
		int ans = 0;
		for (int i = 0; i < t.length() - 1; i++) {
			ans = ans + abs(mapping[t[i + 1]] - mapping[t[i]]);
		}
		cout << ans << endl;
	}
	return 0;
}