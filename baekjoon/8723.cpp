#include <iostream>
#include <algorithm>
using namespace std;
int func(int a, int b, int c) {
    if (a * a + b * b == c * c) {
        return 1;
    }
    if (a == b && b == c) {
        return 2;
    }
    return 0;
}

int main() {
	int n[3];
	for (int i = 0; i < 3; i++) {
		cin >> n[i];
	}
	sort(n, n + 3);
	cout << func(n[0], n[1], n[2]);
}