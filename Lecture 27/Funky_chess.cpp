// Created by Mayank

#include <bits/stdc++.h>
using namespace std;
int n;
int grid[10][10];
int saare_one = 0, ans = -1, N = 10;
int dx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[8] = {2, -2, 1, -1, 2, -2, 1, -1};

void input_grid() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 1) {
				saare_one++;
			}
		}
	}
}

void knight(int x, int y, int count1) {
	ans = max(count1, ans);
	for (int i = 0; i < 8; i++) {

		int x_coordinate = x + dx[i];
		int y_coordinate = y + dy[i];

		if (x_coordinate >= 0 and y_coordinate >= 0 and y_coordinate < N and x_coordinate < N and
		        grid[x_coordinate][y_coordinate] == 1) {

			grid[x_coordinate][y_coordinate] = 0;//You cannot go to a box once visited:

			knight(x_coordinate, y_coordinate, count1 + 1);

			grid[x_coordinate][y_coordinate] = 1;//Backtracking
		}
	}
}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	input_grid();
	grid[0][0] = 0;
	knight(0, 0, 1);
	cout << saare_one - ans << endl;
	// minimise the number of boxes where we cannot travel for that we will maximise the number
	// of boxes we can travel.
	return 0;
}


