#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M, B;
	int minHeight = 256;
	int maxHeight = 0;

	cin >> N >> M >> B;

	vector<vector<int>> V(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> V[i][j];
			minHeight = min(minHeight, V[i][j]);
			maxHeight = max(maxHeight, V[i][j]);
		}
	}

	int anstime = 2147483647;//INT_MAX
	int ansHeight = 0;

	for (int i = minHeight; i <= maxHeight; i++) {
		int time = 0, block = B;

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (V[j][k] > i) {
					time += (V[j][k] - i) * 2;
					block += (V[j][k] - i);
				}
				else if (V[j][k] < i) {
					time += i - V[j][k];
					block -= i - V[j][k];
				}
			}
		}
		if (block >= 0 && time <= anstime && ansHeight <= i) {
			anstime = time;
			ansHeight = i;
		}
	}
	cout << anstime << " " << ansHeight;
}