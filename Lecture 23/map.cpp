// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<int, int>m;
	int a[] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; i++) {
		m.insert({a[i], i + 2});
	}





	auto it = m.find(4);
	//cout << (*it) << endl;
	//cout << (*it).first << " " << (*it).second << endl;
	m.erase(it);

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}


	vector<int>v;

	for (auto it = m.begin(); it != m.end(); it++) {
		v.push_back((*it).first);
	}

	return 0;
}