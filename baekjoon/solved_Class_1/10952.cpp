#include <iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == b and a == 0) break;
		cout << a + b << endl;
	}
}