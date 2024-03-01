#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	vector<pair<int, int>> V(T);
	for (int i = 0; i < T; i++) {
		cin >> V[i].first >> V[i].second;
	}
	sort(V.begin(), V.end());
	for (auto v : V) {
		cout << v.first << " " << v.second << "\n";
	}
}