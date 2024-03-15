#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

pair<int, int> bfs(vector<vector<int>>& vec, vector<vector<bool>>& visited, int startX, int startY) {
	int n = vec.size();
	int m = vec[0].size();

	const int dx[4] = { 1,0,0,-1 };
	const int dy[4] = { 0,1,-1,0 };

	int count = 0;
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	visited[startX][startY] = true;

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		count++;

		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx < m && ny >= 0 && ny < n && vec[ny][nx] == 1 && !visited[ny][nx]) {
				q.push({ ny, nx });
				visited[ny][nx] = true;
			}
		}
	}
	return { 1, count };
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> picture(N, vector<int>(M));
	vector<vector<bool>> visited(N, vector<bool>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> picture[i][j];
		}
	}

	int count = 0;
	int max_size = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (picture[i][j] == 1 && !visited[i][j]) {
				auto result = bfs(picture, visited, i, j);
				count += result.first;
				max_size = max(max_size, result.second);
			}

		}
	}
	cout << count << "\n" << max_size << endl;
}