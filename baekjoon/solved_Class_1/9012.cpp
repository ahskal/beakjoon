#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin>> str;
		string answer = "YES";
		stack<char> Stack;
		for (auto s : str) {
			if (s == '(') {
				Stack.push(s);
			}
			else if (s == ')') {
				if (Stack.empty() || (s == ')' && Stack.top() != '(')) {
					answer = "NO";
					break;
				}
				Stack.pop();
			}
		}
		if (!Stack.empty()) answer = "NO";
		cout << answer << endl;
	}
}