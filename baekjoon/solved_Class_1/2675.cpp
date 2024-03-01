#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int num;
		string str;
		cin >> num >> str;
		for (auto s : str) {
			for (int i = 0; i < num; i++) {
				cout << s;
			}
		}
		cout << endl;
	}
}