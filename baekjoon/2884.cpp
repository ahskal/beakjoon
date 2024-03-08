#include <iostream>
using namespace std;
int main() {
	int h, m;
	cin >> h >> m;
	int time = h * 60 + m - 45;
	h = time / 60;
	m = time % 60;
	if (m < 0) {
		h += 23;
		m += 60;
	}
	cout << h << " " << m;
}