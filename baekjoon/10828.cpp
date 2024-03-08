#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	stack<int> Stack;
	int T;
	cin >> T;
	cin.ignore();
	for (int i = 0; i < T; i++) {
		string cmd;
		cin >> cmd;
		if (cmd.find("push") != string::npos) {
			int n;
			cin >> n;
			Stack.push(n);
		}
		if (cmd.find("top") != string::npos) {
			if (Stack.size() != 0) {
				cout << Stack.top() << "\n";
			}
			else cout << -1 << "\n";
		}
		if (cmd.find("size") != string::npos) {
			cout << Stack.size() << "\n";
		}
		if (cmd.find("empty") != string::npos) {
			if (Stack.size() == 0) {
				cout << 1 << "\n";
			}
			else cout << 0 << "\n";
		}
		if (cmd.find("pop") != string::npos) {
			if (Stack.size() != 0) {
				cout << Stack.top() << "\n";
				Stack.pop();
			}
			else cout << -1 << "\n";
		}
	}
}