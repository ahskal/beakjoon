#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;

	vector<bool> bit(21);
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		if (str.find("add") != string::npos) {
			int n; cin >> n;
			bit[n] = true;
		}
		if (str.find("remove") != string::npos) {
			int n; cin >> n;
			bit[n] = false;
		}
		if (str.find("check") != string::npos) {
			int n; cin >> n;
			cout << bit[n] << "\n";
		}
		if (str.find("toggle") != string::npos) {
			int n; cin >> n;
			bit[n] = !bit[n];
		}
		if (str.find("all") != string::npos) {
			fill(bit.begin(), bit.end(), true);
		}
		if (str.find("empty") != string::npos) {
			fill(bit.begin(), bit.end(), false);
		}
	}
}