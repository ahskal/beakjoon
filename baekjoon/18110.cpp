#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	vector<int> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	int exclude{ static_cast<int>(round(static_cast<double>(n) * 0.15)) };
	double sum{ 0 };
	for (int i = exclude; i < n - exclude; i++) {
		sum += vec[i];
	}
	cout << round(sum / static_cast<double>((n - exclude * 2)));
}