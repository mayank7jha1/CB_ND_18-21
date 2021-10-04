#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int count = 0;
	while (n > 0) {
		if (n & 1 == 1) {
			count++;
		}
		n = n / 2;
	}
	cout << count;
	return 0;
}