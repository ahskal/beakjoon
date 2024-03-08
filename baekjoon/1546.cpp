#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int max = -1;
	double answer= 0.0f;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		answer += n;
		if (n > max) max = n;
	}
	answer /= max * N;
	cout << answer * 100.0f;
}