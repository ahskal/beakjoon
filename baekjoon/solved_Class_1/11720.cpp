#include <iostream>
using namespace std;
int main() {
	int T;
	cin >> T;
	int answer = 0;
	string str;
	cin >> str;
	for (int i = 0; i < T; i++) {
		answer += str[i] - '0';
	}
	cout << answer;
}