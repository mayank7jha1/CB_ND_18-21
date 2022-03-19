#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
template < typename T>

class Graph {
	map<T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void dfs_helper(T scr, map<T, bool>&visited) {
		cout << scr << " ";
		visited[scr] = true;
		for (auto x : l[scr]) {
			if (!visited[x]) {
				dfs_helper(x, visited);
			}
		}
	}
	void dfs() {
		map<T, bool>visited;
		for (auto x : l) {
			visited[x.first] = false;
		}
		int count = 1;
		for (auto x : l) {
			if (!visited[x.first]) {
				cout << "Component " << count << "-->";
				dfs_helper(x.first, visited);
				count++;
			}
			//cout << endl;
		}
	}
};

int main() {
	Graph<int>g;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int starting, ending;
		cin >> starting >> ending;
		g.addEdge(starting, ending);
	}

	//cin >> scr >> destination;
	g.dfs();
}