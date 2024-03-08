#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int N[3]{};
	while (cin >> N[0] >> N[1] >> N[2]) {
		if (N[0] == 0 && N[1] == 0 && N[2] == 0) break;
		sort(N, N + 3);
		if ((N[0] * N[0] + N[1] * N[1]) == N[2] * N[2])
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}