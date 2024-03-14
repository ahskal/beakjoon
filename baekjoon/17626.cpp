#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, answer = 4;
	cin >> N;
	for (int i = 0; i <= 223; i++) {
		for (int j = 0; j < 223; j++) {
			for (int k = 0; k < 223; k++) {
				if (i * i + j * j + k * k == N) {
					int count = 0;
					if (i) { count++; }
					if (j) { count++; }
					if (k) { count++; }
					if (count < answer)
						answer = count;
				}
			}
		}
	}
	cout << answer << endl;
}
