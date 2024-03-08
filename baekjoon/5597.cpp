#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	bool People[30] = {};
	for (int i = 0; i < 28; i++) {
		int a; cin >> a;
		People[a-1] = true;
	}
	for (int i = 0; i < 30; i++) {
		if (!People[i]) {
			cout << i + 1 << endl;
		}
	}
}