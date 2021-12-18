#include<iostream>
using namespace std;


int search(int *a, int i, int n, int target) {
	if (i >= n) {
		return -1;
	}

	if (a[i] == target) {
		return i;
	}

	return search(a, i + 1, n, target);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	int value = search(a, 0, n, target);
	if (value == -1) {
		cout << "Element Not Found";
	} else {
		cout << "Element Found at index " << value;
	}
}
