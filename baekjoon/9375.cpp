#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	unordered_map<string, int>clothes;
	for (int i = 0; i < N; i++) {
		clothes.clear();
		int M;
		cin >> M;
		for (int j = 0; j < M; j++) {
			string str,type;
			cin >> str >> type;
			clothes[type]++;
		}
		int result = 1;
		for (auto cloth : clothes) {
			result *= (cloth.second + 1);
		}
		cout << result - 1 << '\n';		
	}	
}