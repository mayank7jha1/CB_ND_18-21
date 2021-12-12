// Created by Mayank

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> reverse_vector(vector<int>a) {
	reverse(a.begin(), a.end());
	return a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	// sort(v.begin(), v.end());
	//reverse(v.begin(), v.end());

	vector<int>ans = reverse_vector(v);
	for (auto x : ans) {
		cout << x << " ";
	}

	return 0;
}