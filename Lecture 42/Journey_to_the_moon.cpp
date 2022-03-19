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
	void dfs(T node, unordered_map<T, bool>&visited, long long &ans) {
		visited[node] = true;
		ans++;
		for (auto children : l[node]) {
			if (!visited[children]) {
				dfs(children, visited, ans);
			}
		}
	}
	void journey_to_moon() {
		unordered_map<T, bool>visited;
		long long total = n * (n - 1) / 2;
		long long ans = 0;
		dfs(0, visited, ans);
		total -= (ans * (ans - 1)) / 2;
		for (auto x : l) {
			ans = 0;
			if (!visited[x.first]) {
				dfs(x.first, visited, ans);
				total -= (ans * (ans - 1)) / 2;
			}
		}
		cout << total << endl;
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

	//cin >> scr >> destination;
	g.journey_to_moon();
}