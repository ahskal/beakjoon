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

    vector<bool> isSquare(N + 1, false);
    vector<int> dp(N + 1, N); 
    dp[0] = 0;
    for (int i = 1; i * i <= N; ++i) {
        isSquare[i * i] = true;
    }

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j * j <= i; ++j) {
            if (isSquare[i - j * j]) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
    }
    cout << dp[N] << endl;
}
