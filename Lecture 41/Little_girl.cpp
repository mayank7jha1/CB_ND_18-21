#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
#define ll long long

int main() {
	int n, q;
	cin >> n >> q;
	ll a[200010];
	int l, r;
	ll num[200010] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	while (q--) {
		cin >> l >> r;
		num[l - 1]++;
		num[r]--;
	}
	for (int i = 1; i < n; i++) {
		num[i] += num[i - 1];
	}
	sort(a, a + n);
	sort(num, num + n);
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (ll)(a[i] * num[i]);
	}
	cout << ans << endl;
}