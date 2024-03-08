#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;

	int v[201] = {};
	for (int i = 0; i < N; i++) {
		int n; cin >> n;
		v[n + 100]++;
	}
	int a; cin >> a;
	cout << v[a + 100] << endl;
}