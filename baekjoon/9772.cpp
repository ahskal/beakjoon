#include <iostream>
using namespace std;
int main() {
	float a, b;
	while (cin >> a >> b) {
		if (a == 0 || b == 0)
			cout << "AXIS" << endl;
		else if (a > 0) {
			if (b > 0) {
				cout << "Q1" << endl;
			}
			else {
				cout << "Q4" << endl;
			}
		}
		else {
			if (b > 0) {
				cout << "Q2" << endl;
			}
			else {
				cout << "Q3" << endl;
			}
		}
		if (a == 0 && b == 0) {
			return 0;
		}
	}

}