#include<iostream>
using namespace std;

int partition(int *a, int s, int e) {
	int i = s - 1;
	int j = s;
	int pivot = a[e];

	for (; j < e; j++) {
		if (a[j] <= pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[e]);
	return i + 1;
}
void Quicksort(int *a, int s, int e) {
	if (s >= e) {
		return;
	}

	int p = partition(a, s, e);
	Quicksort(a, s, p - 1);
	Quicksort(a, p + 1, e);

}
int main() {

	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	Quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}