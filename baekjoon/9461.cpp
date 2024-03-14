#include <iostream>
#include <vector>
using namespace std;
vector<long long> arr{ 1, 1, 1, 2, 2, 3, 4, 5, 7, 9 };
void sequence() {
	for (int i = 10; i <= 100; i++) {
		arr.emplace_back(arr[i - 1] + arr[i - 5]);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	sequence();
	while (N--) {
		int n;
		cin >> n;
		cout << arr[n - 1] << "\n";
	}
}