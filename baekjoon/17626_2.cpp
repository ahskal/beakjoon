#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;

	vector<int> dp(N + 1, 0);
	dp[1] = 1;

	for (int i = 2; i <= N; i++) {
		int min_value = i;
		for (int j = 1; j * j <= i; j++){
			min_value = min(min_value, dp[i - j * j] + 1);
		}
		dp[i] = min_value;
	}
	cout << dp[N];
}