#include <iostream>
#include <deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	deque<int>dq;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		if (str == "push_front") {
			int n; cin >> n;
			dq.push_front(n);
		}
		else if (str == "push_back") {
			int n; cin >> n;
			dq.push_back(n);
		}
		else if (str == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (str == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (str == "size") {
			cout << dq.size() << "\n";
		}
		else if (str == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (str == "front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (str == "back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
}