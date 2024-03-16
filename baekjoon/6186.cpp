#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//char farm[102][102];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int R, C;
	cin >> R >> C;
	vector<vector<char>> farm(R, vector<char>(C));
	vector<vector<bool>> visited(R, vector<bool>(C, false));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> farm[i][j];
		}
	}

	int dx[4] = { 1, 0, 0, -1 };
	int dy[4] = { 0, 1, -1, 0 };
	int count = 0;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (farm[i][j] == '#' && !visited[i][j]) {
				count++;
				queue<pair<int, int>> q;
				q.emplace(i, j);
				visited[i][j] = true;

				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();

					for (int k = 0; k < 4; k++) {
						int nx = x + dx[k];
						int ny = y + dy[k];
						if (nx < 0 || nx >= R || ny < 0 || ny >= C || farm[nx][ny] == '.' || visited[nx][ny]) {
							continue;
						}
						q.emplace(nx, ny);
						visited[nx][ny] = true;
					}
				}
			}
		}
	}
	cout << count << endl;
}