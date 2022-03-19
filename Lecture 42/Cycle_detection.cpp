#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
long long n, m;
template<typename T>
class Graph {
	unordered_map<T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	bool dfs_helper(T scr, map<T, bool>&visited, int parent) {
		visited[scr] = true;
		for (auto x : l[scr]) {
			if (!visited[x]) {
				bool cycle_found = dfs_helper(x, visited, scr);
				if (cycle_found == 1) {
					return true;
				}
			} else if (x != parent) {
				return true;
			}

		}
		return false;
	}
	bool dfs(T scr) {
		map<T, bool>visited;
		for (auto x : l) {
			visited[x.first] = false;
		}
		return dfs_helper(scr, visited, -1);
	}
};
int main() {
	Graph<int>g;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int starting, ending;
		cin >> starting >> ending;
		g.addEdge(starting, ending);
	}
	g.dfs(0);
}