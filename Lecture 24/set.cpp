// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	set<pair<int, int>>s;
	int a[] = {15, 15, 1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; i++) {
		s.insert({i, a[i]});
	}


	for (auto x : s) {
		cout << x.first << " " << x.second << endl;
	}

	return 0;
}


//pair<int, int> by default:



// set internally binary search tree:
// container:
// it only contains unique and in the sorted way:



// pair->first->uske according order maintain karna hain:




// comparators: jo tumne banaye hain:
// c++:

// greater<int>
