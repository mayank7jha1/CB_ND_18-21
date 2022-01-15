// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool solution[1001][1001], visited[1001][1001];
int count1 = 0;

bool Rat_In_Maze(char maze[][1001], int i, int j, int n, int m) {
	// Base Case:
	if (i == n and j == m) {
		solution[i][j] = 1;
		count1++;
		for (int x = 0; x <= n; x++) {
			for (int y = 0; y <= m; y++) {
				cout << solution[x][y] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;//1.
	}

	if (visited[i][j] == 1) {//2.
		return false;
	}

	solution[i][j] = 1;//3.
	//visited[i][j] = 1;

	if (j + 1 <= m and !visited[i][j + 1]) {//4.
		bool rightans = Rat_In_Maze(maze, i, j + 1, n, m);
		if (rightans == 1) {
			return rightans;
		}
	}

	if (i + 1 <= n and !visited[i + 1][j]) {//5.
		bool downans = Rat_In_Maze(maze, i + 1, j, n, m);
		if (downans == 1) {
			return downans;
		}
	}

	solution[i][j] = 0;//Backtracking://6.
	return false;//7.
}



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char maze[1001][1001];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> maze[i][j];
			if (maze[i][j] == 'X') {
				visited[i][j] = 1;
			}
		}
	}
	n--, m--;

	int ans = Rat_In_Maze(maze, 0, 0, n, m);
	if (ans == 0) {
		cout << "-1" << endl;
	}
	cout << endl << count1 << endl;


	return 0;
}