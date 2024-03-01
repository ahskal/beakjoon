#include <iostream>
#include <set>
using namespace std;
int main() {
	int T,n;
	cin >> T;
	set<int> S;
	for (int i = 0; i < T; i++) {
		cin >> n;
		S.emplace(n);
	}	
	for (auto s : S) {
		cout << s << "\n";
	}
}