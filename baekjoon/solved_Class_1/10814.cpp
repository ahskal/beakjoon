#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin >> T;
	vector<pair<int, string>> V(T);
	for (int i = 0; i < T; i++) {
		cin >> V[i].first >> V[i].second;
	}
	stable_sort(V.begin(), V.end(), [](auto& a, auto& b) {
		return a.first < b.first;
	});
	for (auto v : V) {
		cout << v.first << " " << v.second << "\n";
	}
}