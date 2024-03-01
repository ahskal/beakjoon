#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; ++j) {
			cout << " ";
		}
		// 별표 출력
		for (int k = 0; k < i + 1; ++k) {
			cout << "*";
		}
		cout << endl;
	}
}