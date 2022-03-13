// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>primes;

void Prime_sieve() {
	ll N = 1000001;
	bool p[N];
	memset(p, 1, sizeof(p));
	for (int i = 3; i * i <= N; i += 2) {
		if (p[i]) {
			for (int j = i * i; j <= N; j += i) {
				p[j] = false;
			}
		}
	}

	primes.push_back(2);

	for (int i = 3; i <= N; i += 2) {
		if (p[i]) {
			primes.push_back(i);
		}
	}
}


void segmented_sieve(ll a, ll b) {
	bool p[b - a + 1];
	memset(p, 1, sizeof(p));

	for (int i = 0; primes[i]*primes[i] <= b; i++) {

		ll start = ((a / primes[i]) * primes[i]);
		if (start < a) {
			start += primes[i];
		}

		for (int j = start; j <= b; j += primes[i]) {
			p[j - a] = 0;
		}

		if (start == primes[i]) {
			p[start - a] = 1;
		}
	}

	for (ll j = a; j <= b; j++) {
		if (p[j - a] == 1) {
			cout << j << " ";
		}
	}
	cout << endl;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	Prime_sieve();
	ll t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		if (a == 1) {
			a++;
		}
		segmented_sieve(a, b);
	}


	return 0;
}