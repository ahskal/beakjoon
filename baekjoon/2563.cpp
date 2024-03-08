#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool box[101][101] = {};

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		for (int j = y; j < y + 10; j++) {
			for (int k = x; k < x + 10; k++) {
				box[j][k] = true;
			}
		}
	}

	int size = 0;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (box[i][j])
				size++;
		}
	}
	cout << size << endl;
}