// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	int freq[26] = {0};
	for (int i = 0; i < s.length(); i++) {
		freq[s[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (freq[i] > 0) {
			cout <<  << " " << freq[i] << endl;
		}
	}

	return 0;
}



// 0->a
// 1->b;
// 2->c;
// 3->d;
// ..............25->z





// string s = "Mayank";


// s[2] = y;s[i]: character