#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int num;
	int idx = 1;
	vector<pair<int, int>>v;
	for (int i = 0; i < 9; i++) {
		cin >> num;
		v.emplace_back(make_pair(num, idx++));
	}
	sort(v.begin(), v.end());
	cout << v[8].first << endl;
	cout << v[8].second;
}