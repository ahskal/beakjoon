#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	while (getline(cin, str)) {
		if (str == ".") break;
		string answer = "yes";
		stack<char> Stack;
		for (auto s : str) {
			if (s == '(' || s == '[') {
				Stack.push(s);
			}
			else if (s == ')' || s == ']') {
				if (Stack.empty() || ((s == ')' && Stack.top() != '(') || (s == ']' && Stack.top() != '['))) {
					answer = "no";
					break;
				}
				Stack.pop();
			}
		}
		if (!Stack.empty()) answer = "no";
		cout << answer << endl;
	}
}
