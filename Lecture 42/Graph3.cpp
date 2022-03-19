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
	void bfs(int scr) {
		map<T, int>distance;
		for (auto x : l) {
			distance[x.first] = INT_MAX;
		}
		queue<T>q;
		q.push(scr);
		distance[scr] = 0;
		while (!q.empty()) {
			T vertex = q.front();
			q.pop();
			for (auto nbr : l[vertex]) {
				if (distance[nbr] == INT_MAX) {
					q.push(nbr);
					distance[nbr] = distance[vertex] + 1;
				}
			}
		}
		for (auto x : l) {
			cout << scr << "->" << x.first << " = " << distance[x.first] << endl;
		}
		//cout << scr << "->" << destination << " = " << distance[destination] << endl;
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

	cin >> scr >> destination;
	g.bfs(scr);
}