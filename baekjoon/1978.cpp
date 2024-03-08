#include <iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	int answer = 0;

	auto isFind = [&](int a) {
		if (a <= 1) return false;
		for (int j = 2; j*j <= a; j++) {
			if (a % j == 0) return false;
		}
		return true;
	};

	for (int i = 0; i < T; i++) {
		int a;
		cin >> a;
		if (isFind(a)) {
			answer++;
		}				
	}
	cout << answer;
}