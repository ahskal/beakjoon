#include <iostream>
using namespace std;
pair<int, int> fibos[41];
void Fibonacci() {
	fibos[0] = make_pair(1, 0);
	fibos[1] = make_pair(0, 1);
	for (int i = 2; i <= 40; ++i) {
		int zeroCount = fibos[i - 1].first + fibos[i - 2].first;
		int oneCount = fibos[i - 1].second + fibos[i - 2].second;
		fibos[i] = make_pair(zeroCount, oneCount);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	Fibonacci();

	for (int i = 0; i < T; i++) {
		int num; cin >> num;
		cout << fibos[num].first << " " << fibos[num].second << "\n";
	}
}