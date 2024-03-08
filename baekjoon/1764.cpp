#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	cin >> N >> M;
	set<string> Set;
	unordered_set<string> Unset;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		Unset.emplace(str);
	}
	for (int i = 0; i < M; i++) {
		cin >> str;
		if(Unset.count(str))Set.emplace(str);
	}
	cout << Set.size() << "\n";
	for (auto it = Set.begin(); it != Set.end(); it++) {
		cout << *it << endl; 
	}
}