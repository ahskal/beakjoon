// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

/*
{
#include <string>
#include <vector>

	using namespace std;
	vector<vector<int>> answer;
	void func(int n, int a, int b, int c) {
		if (n == 1) {
			answer.emplace_back(vector<int>{a, c});
		}
		else {
			func(n - 1, a, c, b);
			answer.emplace_back(vector<int>{a, c});
			func(n - 1, b, a, c);
		}
	}

	vector<vector<int>> solution(int n) {
		func(n, 1, 2, 3);

		return answer;
	}
}
*/


void func(int n, char a, char b, char c) {
	if (n == 1) {
		cout << n << "번 디스크를" << " " << a << "에서" << " " << c << "로" << endl;
	}
	else {
		func(n - 1, a, c, b);
		cout << n << "번 디스크를" << " " << a << "에서" << " " << c << "로" << endl;
		func(n - 1, b, a, c);
	}
}
vector<int> solution(int m, int n, vector<vector<int>> picture) {
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	int number_of_area = 0;
	int max_size_of_one_area = 0;

	const int dx[] = { -1, 0, 0, 1 };
	const int dy[] = { 0, -1, 1, 0 };

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j] && picture[i][j] != 0) { // 영역의 시작점이고, 0이 아닌 경우에만 진행
				number_of_area++;
				queue<pair<int, int>> q;
				q.push({ j, i });
				int areaSize = 0; // 각 영역의 크기를 나타내는 변수
				while (!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					if (visited[y][x]) continue; // 이미 방문한 경우 스킵
					visited[y][x] = true;
					areaSize++; // 영역의 크기 증가
					for (int k = 0; k < 4; k++) {
						int nx = x + dx[k];
						int ny = y + dy[k];
						if (nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[ny][nx] && picture[ny][nx] == picture[y][x]) {
							q.push({ nx, ny });
						}
					}
				}
				max_size_of_one_area = max(max_size_of_one_area, areaSize); // 최대 영역 크기 갱신
			}
		}
	}

	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	return answer;
}
int main()
{
	int m = 6;
	int n = 4;
	vector<vector<int>> picture = {
	{1, 1, 1, 0},
	{1, 2, 2, 0},
	{1, 0, 0, 1},
	{0, 4, 0, 1},
	{4, 4, 5, 3},
	{0, 5, 5, 3}
	};

	auto it = solution(m, n, picture);

	cout << it[0] << " " << it[1] << endl;
}
