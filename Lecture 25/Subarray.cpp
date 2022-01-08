// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

//Subarray Calculations:

/*
	Subarray Printing in O(n^3):
*/

void Printing(int *a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++) {
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
}

int current_sum = 0;
int ans = INT_MIN;
int Left = -1, Right = -1;

void MAximum_Sum(int *a, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			current_sum = 0;
			for (int k = i; k <= j; k++) {
				current_sum += a[k];
			}
			ans = max(ans, current_sum);
		}
	}
	cout << ans << endl;
}

void MAximum_Sum_Index(int *a, int n) {
	int i, j, k;
	ans = 0;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			current_sum = 0;
			for (k = i; k <= j; k++) {
				current_sum += a[k];
			}
			if (ans < current_sum) {
				ans = current_sum;
				//cout << Left << " ";
				Left = i;
				Right = j;
			}
		}
	}
	cout << Left << " " << Right << " " << ans << endl;
}

/*
	Subarray Sum in O(n^2):
*/


int pre[100005] = {0};
void Precompute(int *a, int n) {
	for (int i = 0; i < n; i++) {
		pre[i] = (i == 0) ? a[i] : pre[i - 1] + a[i];
	}
}

void Printing_Precompute(int *a, int n) {
	cout << "Prefix Sum : ";
	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
	}
	cout << endl;
}

void Maximum_Sum_Index2(int *a, int n) {
	int i, j, k;
	ans = 0, Left = -1, Right = -1;
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			current_sum = pre[j] - pre[i - 1];
			if (ans < current_sum) {
				ans = current_sum;
				Left = i;
				Right = j;
			}
		}
	}
	cout << ans << endl;
	cout << Left << " " << Right << endl;
}


/*
	Kadane's ALgorithm:
*/

void Maximum_Sum3(int *a, int n) {
	current_sum = 0;
	ans = 0;
	for (int i = 0; i < n; i++) {
		current_sum += a[i];
		if (current_sum < 0) {
			current_sum = 0;
		}
		ans = max(ans, current_sum);
	}
	cout << ans << endl;
}


/*
Best Implementation
*/

void Maximum_Sum4(int *a, int n) {
	int local = a[0];
	int global = a[0];
	for (int i = 0; i < n; i++) {
		local = max(a[i], a[i] + local);
		global = max(local, global);
	}
	cout << global << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// Printing(a, n);
	// MAximum_Sum(a, n);
	// MAximum_Sum_Index(a, n);
	// Precompute(a, n);
	// Printing_Precompute(a, n);
	// Maximum_Sum_Index2(a, n);
	Maximum_Sum3(a, n);
	Maximum_Sum4(a, n);



	return 0;
}