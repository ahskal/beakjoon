#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	unordered_set<int> set;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		set.emplace(n);
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		if (set.find(n) != set.end()) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
}
