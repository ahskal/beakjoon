#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;

	vector<int> dp(N + 1);
	dp[1] = 1;
	if (N >= 2) {
		dp[2] = 3;
	}
	for (int i = 3; i <= N; i++) {
		dp[i] = (dp[i - 1] + (dp[i - 2]) * 2) % 10007;
	}
	cout << dp[N] << endl;
}