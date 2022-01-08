// Created by Mayank

#include <bits/stdc++.h>
using namespace std;


bool compare(pair<int, int>p, pair<int, int>q) {
	return p.second < q.second;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<pair<int, int>>v{{1, 2}, {2, 3}, {19, 5}, {4, 21}};
	for (auto x : v) {
		cout << x.first << "->" << x.second << endl;
	}

	sort(v.begin(), v.end(), compare);
	cout << "Second Vector" << endl;

	for (auto x : v) {
		cout << x.first << "->" << x.second << endl;
	}

	return 0;
}

// 1       1->2
// 2       2->3
// 19      4->21
// 4       19->5