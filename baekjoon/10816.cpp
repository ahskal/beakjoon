#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;
	unordered_map<int, int> Unmap;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		Unmap[n]++;
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		cout << Unmap[n] << " ";
	}
}