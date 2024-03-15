#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(int start, vector<vector<int>>& Vector, vector<bool>& visited) {
	visited[start] = true;
	cout << start << " ";
	for (auto V : Vector[start]) {
		if (!visited[V]) {
			dfs(V, Vector, visited);
		}
	}
}

void bfs(int start, vector<vector<int>>& Vector, vector<bool>& visited) {
	queue<int> q;
	q.emplace(start);
	visited[start] = true;

	while (!q.empty()) {
		int current = q.front();
		q.pop();
		cout << current << " ";

		for (auto V : Vector[current]) {
			if (!visited[V]) {
				visited[V] = true;
				q.emplace(V);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M, V;
	cin >> N >> M >> V;

	vector<vector<int>> Vector(N + 1);
	vector<bool> visited(N + 1, false);

	for (int j = 0; j < M; j++) {
		int a, b;
		cin >> a >> b;
		Vector[a].emplace_back(b);
		Vector[b].emplace_back(a);
	}

	for (int i = 1; i <= N; ++i) {
		sort(Vector[i].begin(), Vector[i].end());
	}

	// dfs 
	dfs(V, Vector, visited);
	cout << endl;

	// bfs
	fill(visited.begin(), visited.end(), false);

	bfs(V, Vector, visited);
	cout << endl;
}