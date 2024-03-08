#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	vector<int> P(N);
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	sort(P.begin(), P.end());
	int num = 0;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		num += P[i];
		answer += num;
	}
	cout << answer << endl;
}