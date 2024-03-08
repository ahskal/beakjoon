#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	auto isFind = [](int a) {
		if (a <= 1) return false;
		for (int j = 2; j * j <= a; j++) {
			if (a % j == 0) return false;
		}
		return true;
	};
	for (int i = N; i <= M; i++) {
		if (isFind(i)) {
			cout << i << "\n";
		}
	}
}