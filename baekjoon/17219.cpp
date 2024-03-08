#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	unordered_map<string, string> map;

	for (int i = 0; i < N; i++) {
		string www, pw;
		cin >> www >> pw;
		map[www] = pw;
	}

	for (int i = 0; i < M; i++) {
		string www;
		cin >> www;
		cout << map[www] << "\n";
	}
}