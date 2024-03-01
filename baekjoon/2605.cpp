#include <iostream>
#include <vector>
using namespace std;
int main() {
	int T;
	cin >> T;
	vector<int> v;
	for (int i = 1; i <= T; i++) {
		int n;
		cin >> n;
		auto it = v.begin();
		advance(it, n);
		v.insert(it, i);
	}
	for (int i = T - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
}