// Subsequences Using Bitmask N=15:
// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;
	sort(a, a + n);//Internally soting of the elements.

	vector<vector<int>>v;//This will contain all the subsets whose sum  is k.

	/*
		Every Subsets whose sum is equal to k has a number of elements
		and we are making 2d array because we want to consider all
		such subsets.
	*/

	int m = pow(2, n);//abc:8  0-7:

	for (int i = 1; i < m; i++) {
		int number = i;
		int j = 0;
		int count = 0;//Subset sum ko calculate ke liye hain:
		vector<int>ans;
		while (number > 0) {
			if (number & 1) {
				count += a[j];
				ans.push_back(a[j]);
			}
			number = number / 2;
			j++;
		}
		if (count == k) {
			if (binary_search(v.begin(), v.end(), ans) == 1) {
				continue;
			}
			v.push_back(ans);
			sort(v.begin(), v.end());
		}
	}

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

