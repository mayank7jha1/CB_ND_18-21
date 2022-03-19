#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int scr, destination;
template<typename T>
class Graph {
	unordered_map <T, list<T>>l;
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
	void dfs(T scr) {
		map<T, bool>visited;//Vector can also be used

		for (auto x : l) {
			visited[x.first] = false;
		}
		dfs_helper(scr, visited);
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
	g.dfs(2);
}