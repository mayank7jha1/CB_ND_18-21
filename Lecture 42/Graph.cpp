#include<bits/stdc++.h>
using namespace std;
const int N = 10005;
template<typename T>

class Graph {
	map<T, list<pair<T, int>>>l;
public:
	void addEdge(T x, T y, bool bidirectional, int w) {
		l[x].push_back(make_pair(y, w));
		// if (bidirectional == 1) {
		// 	l[y].push_back(make_pair(x, w));
		// }
	}
	void printlist() {
		for (auto x : l) {
			T s = x.first;
			list<pair<T, int>>nbrs = x.second;
			cout << "Vertex " << s << " : ";
			for (auto neighbour : nbrs) {
				T s1 = neighbour.first;
				int weight = neighbour.second;
				cout << s1 << " ";
			}
			cout << endl;
		}
	}
};

int main() {
	Graph<int>g;
	int vertices, edges;
	cin >> vertices >> edges;

	for (int i = 0; i < edges; i++) {
		int starting, ending;
		int weight;
		bool direction;
		cin >> starting >> ending >> direction >> weight;
		g.addEdge(starting, ending, direction, weight);
	}
	g.printlist();
}