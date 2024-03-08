#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	long long  K, N;
	cin >> K >> N;
	vector<long long> V(K);
	for (int i = 0; i < K; i++) {
		cin >> V[i];
	}
	sort(V.begin(), V.end());
	long long low = 1;
	long long high = V[K - 1];
	long long answer = 0;

	while (low <= high) {
		long long sum = 0;
		long long mid = (low + high) / 2;
		for (auto v : V) {
			sum += v / mid;
		}
		if (sum >= N) {
			answer = max(answer, mid);
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	cout << answer << endl;
}