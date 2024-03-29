#include <vector>
#include <queue>
using namespace std;

//���丮��
int Factorial(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}
//���丮�� 10^20����
unsigned long long Factorial(const unsigned long long& n) {
	unsigned long long a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}
int bfs(vector<vector<int>>& vec) {
	int n = vec.size();
	int m = vec[0].size();

	const int dx[4] = { 1,0,0,-1 };
	const int dy[4] = { 0,1,-1,0 };

	vector<vector<bool>> visited(n, vector<bool>(m, false));
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vec[i][j] == 1 && !visited[i][j]) {
				count++;
				queue<pair<int, int>> q;
				q.push({ i, j });
				visited[i][j] = true;

				while (!q.empty()) {
					int x = q.front().second;
					int y = q.front().first;
					q.pop();

					for (int k = 0; k < 4; k++) {
						int nx = x + dx[k];
						int ny = y + dy[k];
						if (nx >= 0 && nx < m && ny >= 0 && ny < n && vec[ny][nx] == 1 && !visited[ny][nx]) {
							q.push({ ny, nx });
							visited[ny][nx] = true;
						}
					}
				}
			}
		}
	}
	return count;
}