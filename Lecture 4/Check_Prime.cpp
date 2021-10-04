// Created by Mayank
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 2;
	int flag = 0;
	while (i <= n - 1) {
		if (n % i == 0) {
			flag = 1;
			//cout << "Not Prime";
		}
		i = i + 1;
	}
	//cout << "Prime";
	if (flag == 0) {
		cout << "Prime";
	} else  {
		cout << "Not Prime";
	}
	return 0;
}