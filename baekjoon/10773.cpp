#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int K;
	cin >> K;

	stack<int> Stack;
	for (int i = 0; i < K; i++) {
		int n;
		cin >> n;
		if (n == 0) {
			Stack.pop();
		}
		else {
			Stack.emplace(n);
		}
	}
	unsigned long long answer = 0;
	while (!Stack.empty())
	{
		answer += Stack.top();
		Stack.pop();
	}
	cout << answer;
}