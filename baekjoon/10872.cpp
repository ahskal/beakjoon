#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	int Num = 1;
	while (1) {
		if (N == 0)
			break;
		Num *= N;
		N--;
	}
	cout << Num << endl;
}