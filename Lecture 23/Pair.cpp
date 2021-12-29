// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int>p, pair<string, int>q) {
	return p.second < q.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	// pair<char, int>p;
	// p.first = 'M';
	// p.second = 43;
	// cout << p.first << " " << p.second << endl;
	// p = make_pair('S', 21);
	// cout << p.first << " " << p.second << endl;
	// p = {'Z', 23};
	// cout << p.first << " " << p.second;

	//cout << sizeof(p) << " ";


	int n;
	cin >> n;
	vector<pair<string, int>>v;
	//vector<pair<string, int>>v1(n);
	//pair<string, int>p;
	for (int i = 0; i < n; i++) {
		string name;
		int value;
		cin >> name >> value;
		//cout << name << " " << value << endl;
		v.push_back({name, value});
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}




	return 0;
}