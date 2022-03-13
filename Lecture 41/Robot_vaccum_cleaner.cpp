#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n;
vector<string>v;
string s, ans;
#define ll long long


ll total(string &x) {
	ll count = 0, ans = 0;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == 's') {
			count++;
		} else {
			ans += count;
		}
	}
	return ans;
}

bool compare(string &a, string &b) {
	string str = a + b;
	string str2 = b + a;
	return total(str) > total(str2);
}



int main() {
	cin >> n;
	while (n--) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);
	/*for (auto x : v) {
		cout << x << endl;
	}*/
	for (auto x : v) {
		ans += x;
	}
	cout << total(ans) << endl;
}