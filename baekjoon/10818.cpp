#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> v;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.emplace_back(num);
	}
	
	sort(v.begin(), v.end());

	cout << v[0] << " " << v[v.size() - 1];
}