#include<iostream>
using namespace std;
int func(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}
int main() {
	int N, K;
	cin >> N >> K;
	cout << func(N) / (func(K) * func(N - K));
}