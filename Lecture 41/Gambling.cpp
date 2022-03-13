#include<bits/stdc++.h>
using namespace std;
const int N = 100005;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, x = 0, y = 0;
	cin >> n;
	long long a[1000005], b[1000005];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long ans = 0;
	sort(a, a + n, greater<int>());
	sort(b, b + n, greater<int>());
	// for (auto x : b) {
	// 	cout << x << " ";
	// }
	// cout << endl;
	while (x < n or y < n) {
		if (a[x] > b[y]) {
			ans += a[x++];
		} else {
			++y;
		}
		if (a[x] > b[y]) {
			++x;
		} else {
			ans -= b[y++];
		}
	}
	cout << ans << endl;
}