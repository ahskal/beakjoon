#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int  k, n;
		cin >> k >> n;
		int apartment[15][15] = { 0 };
		for (int j = 1; j <= 14; j++) {
			apartment[0][j] = j;
		}
		for (int j = 1; j <= k; j++) {
			for (int l = 1; l <= n; l++) {
				apartment[j][l] = apartment[j - 1][l] + apartment[j][l - 1];
			}
		}
		cout << apartment[k][n] << endl;
	}
}