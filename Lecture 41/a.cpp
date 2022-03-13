#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int main() {
	int n;
	cin >> n;
	// int a[n];
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// auto it = lower_bound(a, a + n, 3);
	auto it = lower_bound(a.begin(), a.end(), 3);
	cout << it - a.begin() << endl;

	// auto it1 = upper_bound(a, a + n, 3);
	auto it1 = upper_bound(a.begin(), a.end(), 2);
	cout << it1 - a.begin() << endl;


	cout << it1 - it << endl;

	bool x = binary_search(a, a + n, 9);
	cout << x << endl;
}