#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K, count = 0;
	cin >> N >> K;
	vector<int> coin(N);
	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}
	for (int i = N-1; i >= 0; i--) {
		if (K >= coin[i]) {
			count += K / coin[i];
			K %= coin[i];
		}
	}
	cout << count << endl;
}