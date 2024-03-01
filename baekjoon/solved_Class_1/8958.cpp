#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;
		int P = 0;
		int answer =0;
		for (auto s : str) {
			if (s == 'O') {
				P++;
				answer += P;
			}
			else {
				P = 0;
			}
		}
		cout << answer << endl;
	}
}