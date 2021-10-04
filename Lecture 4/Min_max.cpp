// Created by Mayank

#include <iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	int l = INT_MIN, s = INT_MAX, sum = 0;
	while (i <= n) {
		int x;
		cin >> x;
		if (x >= l) {
			l = x;
		}
		if (x  <= s) {
			s = x;
		}
		sum = sum + x;
		i = i + 1;
	}
	int mean = sum / n;
	mean = abs(mean);
	cout << "Largest : " << l << " Smallest: " << s << " mean: " << mean;
	return 0;
}
//n=5
//5 4 7 3 1


