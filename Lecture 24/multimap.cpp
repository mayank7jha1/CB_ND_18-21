// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	multimap<int, int>m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		m.insert({x, y});
	}
	for (auto x : m) {
		cout << x.first << "->" << x.second << endl;
	}
	return 0;
}

multimap-- > map->unordered_map;