#include <iostream>
#include <deque>
using namespace std;
int main() {
	int N;
	cin >> N;
	deque<int> Dq;
	for (int i = 1; i <= N; i++) {
		Dq.emplace_back(i);
	}
	while (Dq.size() > 1) {
		Dq.pop_front();
		Dq.emplace_back(Dq.front());
		Dq.pop_front();
	}
	cout << Dq.front();
}
