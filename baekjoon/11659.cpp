#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N, M;
	cin >> N >> M;
	vector<int> arr(N+1);
	for (int i = 1; i <= N; i++) {
		int n;
		cin >> n;
		arr[i] = arr[i - 1] + n;
	}
	for (int i = 0; i < M; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << arr[y] - arr[x-1] << "\n";
	}
}