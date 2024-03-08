#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	unordered_map<string, string> Unmap;

	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		string idx = to_string(i + 1);
		Unmap[str] = idx;
		Unmap[idx] = str;
	}

	for (int i = 0; i < M; i++) {
		cin >> str;
		cout << Unmap[str] << "\n";
	}
}