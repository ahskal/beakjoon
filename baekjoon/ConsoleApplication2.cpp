#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

vector<vector<int>> func(vector<vector<int>>& image, int sr, int sc, int color) {
    const int dx[] = { -1, 0, 0, 1 };
    const int dy[] = { 0, -1, 1, 0 };

    int vr = image.size();
    int vc = image[0].size();

    vector<vector<bool>> isFind(vr, vector<bool>(vc, false));
    queue<pair<int, int>> q;
    q.emplace(pair{ sr, sc });
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (isFind[y][x]) continue;
        isFind[y][x] = true;
        image[y][x] = color;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < vr && ny < vc && image[ny][nx] != 0 && !isFind[ny][nx]) {
                q.emplace(pair{ nx, ny });                
            }
        }
    }
    return image;
}

vector<vector<int>> func2(vector<vector<int>>& image, int sr, int sc, int newColor) {
	const int dx[] = { -1, 0, 0, 1 };
	const int dy[] = { 0, -1, 1, 0 };
	int vr = image.size();
	int vc = image[0].size();
	queue<pair<int, int>> q;
	q.emplace(pair{ sr, sc });
	int color = image[sr][sc];
	if (color == newColor) return image;
	image[sr][sc] = newColor;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < vr && ny < vc && image[nx][ny] == color) {
				image[nx][ny] = newColor;
				q.emplace(pair{ nx, ny });
			}
		}
	}
	return image;
}

void dfs(vector<vector<int>>& image, int r, int c, int color, int newColor) {
	if (image[r][c] == color) {
		image[r][c] = newColor;
		if (r >= 1) {
			dfs(image, r - 1, c, color, newColor);
		}
		if (c >= 1) {
			dfs(image, r, c - 1, color, newColor);
		}
		if (r + 1 < image.size()) {
			dfs(image, r + 1, c, color, newColor);
		}
		if (c + 1 < image.size()) {
			dfs(image, r, c + 1, color, newColor);
		}
	}
}


int main()
{
	vector<vector<int>> image = {
		{1,1,1,1},
		{1,0,0,0},
		{1,0,1,0},
		{1,1,1,0}
	};
	int sr; // 열
	int sc; // 행
	int color;

	for (auto i1 : image) {
		for (auto i2 : i1) {
			cout << i2;
		}
		cout << endl;
	}
	//cin >> sr >> sc >> color;
	sr = 0; sc = 1; color = 0;

	func(image, sr, sc, color);

	cout << "==========" << endl;

	for (auto i1 : image) {
		for (auto i2 : i1) {
			cout << i2;
		}
		cout << endl;
	}

}
