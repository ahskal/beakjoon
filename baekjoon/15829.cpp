#include <iostream>
#include <cmath>
#define M 1234567891
#define r 31
using namespace std;
int main() {
	long long answer = 0, R = 1;
	int L;
	string str;
	cin >> L >> str;
	for (int i = 0; i < str.size(); i++) {
		answer += ((str[i] - 'a' + 1) * R) % M;
		answer %= M;
		R = (R * r) % M;
	}
	cout << answer;
}
