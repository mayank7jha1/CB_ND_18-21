// Created by Mayank

#include <bits/stdc++.h>
using namespace std;


void Prime_seive(int N) {
	bool p[100005];
	memset(p, 1, sizeof(p));

	for (int i = 3; i * i <= N; i += 2) {
		if (p[i]) {
			// Multiples ko false karna hain:
			for (int j = i * i; j <= N; j += i) {
				p[j] = 0;
			}
		}
	}

	cout << 2 << " ";
	for (int i = 3; i <= N; i += 2) {
		if (p[i]) {
			cout << i << " ";
		}
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	Prime_seive(n);
	return 0;
}