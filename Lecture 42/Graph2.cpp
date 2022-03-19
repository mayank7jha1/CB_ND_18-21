#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
template<typename T>
class Graph {
	unordered_map <T, list<T>>l;
public:
	void addEdge(T x, T y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void bfs(int scr) {
		unordered_map<T, bool>visited;
		queue<T>q;
		q.push(scr);
		visited[scr] = 1;
		while (!q.empty()) {
			T vertex = q.front();
			cout << vertex << endl;
			q.pop();
			for (auto nbr : l[vertex]) {
				if (!visited[nbr]) {
					q.push(nbr);
					visited[nbr] = 1;
				}
			}
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
	g.bfs(1);
}