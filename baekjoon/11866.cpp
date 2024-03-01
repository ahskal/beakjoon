#include <iostream>
#include <deque>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	deque<int> Dq;
	for (int i = 1; i <= N; i++) {
		Dq.emplace_back(i);
	}
	cout << "<";
	while(!Dq.empty())
	{
		for (int i = 0; i < K - 1; i++) {
			Dq.emplace_back(Dq.front());
			Dq.pop_front();
		}
		cout << Dq.front();
		Dq.pop_front();
		if (!Dq.empty()) cout << ", ";
	}
	cout << ">";
}