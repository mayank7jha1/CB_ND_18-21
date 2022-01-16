#include <bits/stdc++.h>
using namespace std;
#define ll long long

void subsets(int *in, int i, int n, int *output, int j, vector<vector<int>>&v, int target) {
	if (i == n) {
		int index = 0;
		vector<int>ans;
		int sum = 0;
		while (index < j) {
			sum += output[index];
			ans.push_back(output[index]);
			index++;
		}
		if (sum == target and binary_search(v.begin(), v.end(), ans) == 0) {
			v.push_back(ans);
		}
		ans.clear();
		return;
	}

	output[j] = in[i];
	subsets(in, i + 1, n, output, j + 1, v, target);//Include kar rahe hain
	subsets(in, i + 1, n, output, j, v, target);//Include nahi kar rahe hain:
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int input[n];
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	int target;
	cin >> target;
	int output[n];
	sort(input, input + n);//Internally soting of the elements.
	vector<vector<int>>v;
	subsets(input, 0, n, output, 0, v, target);
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}