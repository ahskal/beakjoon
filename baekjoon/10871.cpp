#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	vector<int> vn;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vn.emplace_back(a);
	}
	for (auto v : vn) {
		if (v < x) cout << v << " ";
	}
}