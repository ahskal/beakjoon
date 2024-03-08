#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	queue<int>Q;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push") {
			int num;
			cin >> num;
			Q.emplace(num);
		}
		if (str == "pop") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
				Q.pop();
			}
			else
				cout << -1 << "\n";
		}
		if (str == "size") {
			cout << Q.size() << "\n";
		}
		if (str == "empty") {
			cout << Q.empty() << "\n";
		}
		if (str == "front") {
			if (!Q.empty()) {
				cout << Q.front() << "\n";
			}
			else
				cout << -1 << "\n";
		}
		if (str == "back") {
			if (!Q.empty()) {
				cout << Q.back() << "\n";
			}
			else
				cout << -1 << "\n";
		}
	}
}